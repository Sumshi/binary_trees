#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  is a pointer to the node to count
 * Return: 0 if tree is null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);/*it is a leaf node*/
	}
	/*get the leaves of left subtree*/
	size_t left_leaves = binary_tree_leaves(tree->left);

	/*get the leaves of right subtree*/
	size_t right_leaves = binary_tree_leaves(tree->right);
	size_t  total_leaves;

	total_leaves = left_leaves + right_leaves;
	return (total_leaves);
}
