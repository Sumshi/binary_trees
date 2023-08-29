#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * siblings are nodes that share the same parent node
 * @node: is a pointer to the node to find the sibling
 * Return:  NUll, if node or parent is null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	/*check if node is left child*/
	if (parent->left == node)
	{
		return (parent->right);/*returns the right child*/
	}
	/*check if node is right child*/
	else if (parent->right == node)
	{
		return (parent->left);/*returns the left child*/
	}
	else/*no sibling for either left or right*/
	{
		return (NULL);
	}
}
