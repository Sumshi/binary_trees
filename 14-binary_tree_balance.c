#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  is a pointer to the node to measure
 * Return: 0 if tree is null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	/*balance factor = height of left - height of right*/
	int left_subtree;
	int right_subtree;

	if (tree == NULL)
	{
		return (0);
	}

	/*get the height of left subtree*/
	left_subtree = binary_tree_height(tree->left);

	/*get the height of right subtree*/
	right_subtree = binary_tree_height(tree->right);

	return (left_subtree - right_subtree);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * or the maximum depth of a binary tree
 * @tree:  is a pointer to the root node of the tree
 * Return: 0 if the tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{/*height of binary tree = 1 + the number of edges*/
	/*on the longest path from the root to the leaf*/

	int left = 0;
	int right = 0;


	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left += 1 + binary_tree_height(tree->left);/*left height of tree*/

	}
	if (tree->right)
	{
		right += 1 + binary_tree_height(tree->right);/*left height of tree*/

	}
	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}
