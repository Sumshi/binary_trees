#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * uncle is the sibling of the parent node.
 * @node: is a pointer to the node to find the uncle
 * Return:  NUll, if node or parent is null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	/*uncle is the sibling of the parent*/
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * siblings are nodes that share the same parent node
 * @node: is a pointer to the node to find the sibling
 * Return:  NUll, if node or parent is null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	/*check if node is left child*/
	if (node->parent->left == node)
	{
		return (node->parent->right);/*returns the right child*/
	}
	/*check if node is right child*/
	else if (node->parent->right == node)
	{
		return (node->parent->left);/*returns the left child*/
	}
	else/*no sibling for either left or right*/
	{
		return (NULL);
	}
}
