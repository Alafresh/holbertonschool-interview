#include "binary_trees.h"

/**
* binary_tree_node - Stores recursively each level in an array of strings
* @parent: Pointer to the node to print
* @value: Offset to print
* Return: length of printed tree after process
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	return (newNode);
}
