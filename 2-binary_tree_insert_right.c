#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: pointer on the root of the binary tree
 * @value: value to stock in the node.
 * Return: binary tree, or NULL if it's failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	if (parent == NULL)
	{
	return (NULL);
	}

	if (parent->right != NULL)
	{
	newnode->right = parent->right;
	parent->right->parent = newnode;
	}

parent->right = newnode;
return (newnode);
}