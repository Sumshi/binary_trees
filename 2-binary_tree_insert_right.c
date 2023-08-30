#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);/*memory allocation fails*/
	}
	new_node->n = value;
	new_node->parent = parent;

	/*check if the parent already has a right child*/
	if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	else/*parent has an existing right child*/
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
