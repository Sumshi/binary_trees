#include "binary_trees.h"
/**
 * binary_tree_levelorder - goes through a binary tree in level-order traversal
 * @tree:   is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node.
 * Return: If tree or func is NULL, do nothing
 * level-order-traversal - data from nodes are read by moving
 * in a level by level fashion
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *queue[1000];
	int front = 0;/*front of a queue*/
	int rear = 0;/*tail of a queue*/

	if (tree == NULL)
	{
		return;
	}
	if (func == NULL)
	{
		return;
	}
	queue[rear++] = tree;/*tree node is added into the queue*/
	while (front < rear)
	{
		/*dequeue the tree*/
		const binary_tree_t *current = queue[front++];


		func(current->n);/*function call for current node*/

		/*enqueue the left and right child to continue traversal*/
		if (current->left)
			queue[rear++] = current->left;
		if (current->right)
			queue[rear++] = current->right;
		/*visit a node, enqueue its children, dequeue it*/
	}
}
