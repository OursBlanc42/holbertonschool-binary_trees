#include <stdlib.h>
#include "binary_trees.h"

/**
* height_calculation - count the height of a tree
* Description : calculate the height by traversing each branch
* keep a track of height and update it at each level
* @node: is a pointer to a node of the tree
* @L_height: is a counter to count each branch on left
* @R_height: is a counter to count each branch on right
* Return: NULL if tree is empty or size of tree
*/
int height_calculation(const binary_tree_t *node,
int *L_height, int *R_height)
{
	/* If we reach NULL it's the end */
	if (node == NULL)
	{
		return (0);
	}

	/* recursively catch each node */
	*L_height = height_calculation(node->left, L_height, R_height);
	*R_height = height_calculation(node->right, L_height, R_height);

	/* find the maximum between two value */
	if (*L_height >= *R_height)
	{
		return (*L_height + 1);
	}
	else
	{
		return (*R_height + 1);
	}

}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: Size of the tree of 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* declare variable */
	int L_height = 0;
	int R_height = 0;
	int height = 0;

	/* Check special case */
	if (tree == NULL)
	{
		return (0);
	}

	/* call recursive function & return result (-1 to convert len to index) */
	height = (height_calculation(tree, &L_height, &R_height)) - 1;
	return ((size_t)height);
}