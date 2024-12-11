#include "binary_trees.h"
/**
* calculate_height - measures the height from a node in a binary tree
* Description: Recursively traverses until the leave, then back to the root
* and adding 1 at each level. When sub branch merges, keep the max height
* between left and right subtrees.
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: height of the node or 0 if tree is NULL or 1 leave
*/
size_t calculate_height(const binary_tree_t *tree)
{
	/* declare variable & initialize */
	size_t left_height = 0;
	size_t right_height = 0;

	/* Check special case */
	if (tree == NULL)
	{
		return (0);
	}

	/* recursive call on each branch (left & right )*/
	left_height = calculate_height(tree->left);
	right_height = calculate_height(tree->right);

	/* Find the max "len" between left and right subbranche */
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
* Description: Call the subfunction "calculate_height" to retrieve height
* and substract 1 (cause height start at 0 in exemple )
* @tree: is a pointer to the root node of the tree to measure the height.
* Return: height of the node or 0 if tree is NULL or 1 leave
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* declare and initialize variable */
	size_t height = 0;

	/* Check special case */
	if (tree == NULL)
	{
		return (0);
	}

	/* check special case when only one node height = 0;*/
	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);


	/* calculate height and retrieve 1 (cause start at 0 )*/
	height = (calculate_height(tree) - 1);

	return (height);
}
