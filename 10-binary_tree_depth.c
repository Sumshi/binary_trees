#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree:  is a pointer to the node to measure the depth
 * Return: 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*depth = number of edges that need to be traversed to reach the root node*/
	size_t depth = 0;/*depth is initially 0*/

	if (tree == NULL)
	{
		return (0);
	}
	while (tree != NULL && tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;/*updates pointer to point to its parent node*/
	}
	return (depth);
}
