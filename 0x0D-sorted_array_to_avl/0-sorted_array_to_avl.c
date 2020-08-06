#include "binary_trees.h"

/**
 * binary_tree - creates a binary tree
 * @p: parent node
 * @v: value
 * Return: poointer to the new node
 */
avl_t *binary_tree(avl_t *p, int v)
{
	avl_t *new_node;

	new_node = malloc(sizeof(avl_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = v;
	new_node->parent = p;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}

/**
 * insert - it inserts a node for a binary tree
 * @r: head of binary tree
 * @array: the array with elements
 * @s: end position of the array
 * @start: start of the array
 * Return: pointer to new node or NULL
 */
avl_t *insert(avl_t **r, int s, int start, int *array)
{
	int half = (start + s) / 2;
	avl_t *new = NULL;

	if (start > s)
		return (NULL);
	new = binary_tree(*r, array[half]);
	if (half != start)
		new->left = insert(&new, half - 1, start, array);
	if (half != s)
		new->right = insert(&new, s, half + 1, array);
	return (new);
}


/**
 * sorted_array_to_avl - function that builds an AVL tree from an array
 *
 * @array: The array to sorted
 * @size: Size
 * Return: pointer to root node
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *r = NULL;

	r = insert(&r, size - 1, 0, array);
	return (r);
}