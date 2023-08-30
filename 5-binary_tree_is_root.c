#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	/*if the parent is null, then the given node is root*/
	if (node->parent == NULL)/*root node does not have parent*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
