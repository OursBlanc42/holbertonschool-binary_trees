#include <stdlib.h>
#include "binary_trees.h"
/**
* height_calculation - count the height of a tree
* Description : calculate the height by traversing each branch
* keep a track of height and update it at each level
* @node: is a pointer to a node of the tree
* Return: NULL if tree is empty or size of tree
*/
int height_calculation(const binary_tree_t *node)
{

	int left_height;
	int right_height;

	/* If we reach NULL it's the end */
	if (node == NULL)
	{
		return (0);
	}

	/* recursively catch each node */
	left_height = height_calculation(node->left);
	right_height = height_calculation(node->right);

	/* find the maximum between two value */
	if (left_height >= right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}

}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: Size of the tree of 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{

	/* Check special case */
	if (tree == NULL)
	{
		return (0);
	}

	/* call recursive function & return result (-1 to convert len to index) */
	return ((size_t)height_calculation(tree)-1);
}
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
