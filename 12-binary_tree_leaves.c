#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  is a pointer to the node to count
 * Return: 0 if tree is null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);/*it is a leaf node*/
	}
	/*get the leaves of left subtree*/
	left_leaves = binary_tree_leaves(tree->left);

	/*get the leaves of right subtree*/
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
