#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using inorder traversal\
 * inoder traversal = left->root->right
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	if (func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);/*traverses left subtree*/
	func(tree->n);/*prints the value of current root node*/
	binary_tree_inorder(tree->right, func);/*traverses right subtree*/
}
