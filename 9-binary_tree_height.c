#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * or the maximum depth of a binary tree
 * @tree:  is a pointer to the root node of the tree
 * Return: 0 if the tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{/*height of binary tree = 1 + the number of edges*/
	/*on the longest path from the root to the leaf*/

	if (tree == NULL)
	{
		return (0);
	}

	int left = binary_tree_height(tree->left);/*left height of tree*/
	int right = binary_tree_height(tree->right);/*right height of tree*/

	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}
}
