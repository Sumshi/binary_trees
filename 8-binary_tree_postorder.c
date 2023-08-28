#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using postorder traversal
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{/*inoder traversal = left->right->root*/
	if (tree == NULL)
	{
		return;
	}
	if (func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);/*traverses left subtree*/
	binary_tree_postorder(tree->right, func);/*traverses right subtree*/
    func(tree->n);/*prints the value of current node*/
}
