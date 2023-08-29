#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree:  is a pointer to the node to check
 * Return: 0 if tree is null
 * a binarytree is full, if all nodes have either 0 or two childs
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	/*check for a leaf node*/
	if (tree->left == NULL && tree->right == NULL)
	{
		/*nodes = 0, return true*/
		return (1);/*it is full tree*/
	}
	/*check if left and right are not null*/
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	/*if only one subtree is null*/
	else
	{
		return (0);
	}
}
