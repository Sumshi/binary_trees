#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * or the maximum depth of a binary tree
 * @tree:  is a pointer to the root node of the tree
 * Return: 0 if the tree is null
 * height of binary tree = 1 + the number of edges
 * on the longest path from the root to the leaf
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}

