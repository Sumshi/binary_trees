#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (tree);
	}
	/*check if tree has a right child*/
	if (tree->right == NULL)
	{
		return (tree);/*returns the original tree*/
	}
	/*new root of subtree is assigned to right child*/
	binary_tree_t *new_root = tree->right;

	tree->right = new_root->left;

	if (new_root->left != NULL)
	{
		new_root->left->parent = tree;
	}
	new_root->parent = tree->parent;
	tree->parent = new_root;
	new_root->left = tree;

	return (new_root);
}
