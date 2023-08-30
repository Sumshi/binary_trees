#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * preoder traversal = root->left->right
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	if (func == NULL)
	{
		return;
	}
	func(tree->n);/*prints the value of current root node*/
	binary_tree_preorder(tree->left, func);/*traverses left subtree*/
	binary_tree_preorder(tree->right, func);/*traverses right subtree*/
}
