#ifndef _SLIDE_H_
#define _SLIDE_H_
#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1
#include <stdio.h>

int slide_line(int *line, size_t size, int direction);
int slideLeft(int *line, size_t size);
int slideRight(int *line, size_t size);

#endif
