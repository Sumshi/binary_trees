#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * size of a tree = number of elements present in the tree
 * @tree:  is a pointer to the node to measure the size
 * Return: 0 if tree is null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t left_size;
	size_t right_size;

	if (tree == NULL)
	{
		return (0);
	}

	/*get the size of left subtree*/
	left_size = binary_tree_size(tree->left);

	/*get the size of right subtree*/
	right_size = binary_tree_size(tree->right);

	/*size = left + right + 1*/
	return (left_size + right_size + 1);/*1 for the current node*/
}
