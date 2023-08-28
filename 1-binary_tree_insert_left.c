#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;/*this is the node to create*/

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)/*parent has left child already*/
	{
		new_node->left = parent->left;
        parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}