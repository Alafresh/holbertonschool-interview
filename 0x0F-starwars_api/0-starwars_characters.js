#!/usr/bin/node

const req = require('req');

req('https://swapi-api.hbtn.io/api/films/' + process.argv[2], async function (e, res, content) {
  if (e) {
    console.log(e);
  } else {
    const characters = JSON.parse(content).characters;
    for (const i in characters) {
      const p = new Promise((resolve, reject) => {
        req(characters[i], function (e, res, content) {
          if (e) {
            reject(e);
          } else {
            resolve(content);
          }
        });
      });
      await p.then(content => console.log(JSON.parse(content).name)).catch(e => console.log(e));
    }
  }
});