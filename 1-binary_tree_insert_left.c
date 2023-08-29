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
	binary_tree_t *former_left_child = NULL;
	binary_tree_t *new_left_child = NULL;

	/* If parent is null then we can't insert any node */
	if (parent == NULL)
		return (NULL);

	/* Create the new node to be inserted */
	new_left_child = binary_tree_node(parent, value);
	if (new_left_child == NULL)
		return (NULL);

	/* If parent already has a left-child, have a pointer to the child */
	if (parent->left != NULL)
		former_left_child = parent->left;

	parent->left = new_left_child;
	if (former_left_child)
	{
		new_left_child->left = former_left_child;
		former_left_child->parent = new_left_child;
	}

	return (new_left_child);
}
