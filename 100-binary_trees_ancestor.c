#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * uncle is the sibling of the parent node.
 * @first: is a pointer to the first node
 * @second:  is a pointer to the second node
 * Return:  NUll, if no common ancestor is found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t depth_first;/*gets depth of first  node*/
	size_t depth_second;/*gets the depth of second node*/

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	/*calculates the depth of the first node*/
	depth_first = binary_tree_depth(first);

	/*calculate the depth of the second node*/
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}

	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree:  is a pointer to the node to measure the depth
 * Return: 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;/*depth is initially 0*/

	if (tree == NULL)
	{
		return (0);
	}
	/*depth = number of edges that need to be traversed to reach the root node*/
	while (tree != NULL && tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;/*updates pointer to point to next node*/
	}
	return (depth);
}
