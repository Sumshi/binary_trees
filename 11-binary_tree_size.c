#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  is a pointer to the node to measure the size
 * Return: 0 if tree is null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{/*size of a tree = number of elements present in the tree*/

	if (tree == NULL)
	{
		return (0);
	}

	/*get the size of left subtree*/
	size_t left_size = binary_tree_size(tree->left);

	/*get the size of right subtree*/
	size_t right_size = binary_tree_size(tree->right);
	size_t  tree_size;

	tree_size = left_size + right_size + 1;/*for the current node*/
	return (tree_size);
}
