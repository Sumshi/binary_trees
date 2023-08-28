#include "binary_trees.h"
/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree:  is a pointer to the node to count
 * Return: 0 if tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/*check if node has a child*/
	if (tree->left != NULL || tree->right != NULL)/*has a child*/
	{
		size_t left_node = binary_tree_nodes(tree->left);
		size_t right_node = binary_tree_nodes(tree->right);
		size_t total_nodes;

		total_nodes = left_node + right_node + 1;
		return (total_nodes);

	}
	else/*node has no child , it is a leaf node*/
	{
		return (0);
	}
}
