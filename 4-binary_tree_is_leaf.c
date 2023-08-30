#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * a leaf node is a node with no child
 * @node: pointer to the node to check
 * Return: void
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	/*both the left and right subtree must be null in leaf node*/
	if (node->left == NULL && node->right == NULL)
	{
		return (1);/*node is a leaf*/
	}
	else
	{
		return (0);/*node is not a leaf*/
	}
}
