#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/**
* struct binary_tree_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
*/
struct binary_tree_s
{
	int n;

	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* Basic Binary Tree */
typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function given by Hbtn to print binary tree */
void binary_tree_print(const binary_tree_t *);

/* Task 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Task 1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Task 2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task 3 */
void binary_tree_delete(binary_tree_t *tree);

/* Task 4 */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Task 5 */
int binary_tree_is_root(const binary_tree_t *node);

/* Task 6 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Task 7 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Task 8 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Task 9 */
size_t binary_tree_height(const binary_tree_t *tree);

/* Task 10 */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Task 11 */
size_t binary_tree_size(const binary_tree_t *tree);

size_t binary_tree_leaves(const binary_tree_t *tree);
#endif