#include "binary_trees.h"
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * a binary tree is complete in which all levels are completely filled
 * Nodes in the last level are as left as possible
 * If a node has only one child, it must be the left child
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *queue[1000];
	int front = 0;/*front of a queue*/
	int rear = 0;/*rear of a queue*/
	int not_full_node = 0;/* a node with one child is seen*/

		if (tree == NULL)
		{
			return (0);
		}
	queue[rear++] = tree;/*tree node is added into queue*/
	while (front < rear)/*loop runs as there are nodes in queue*/
	{
		/*dequeues the front node*/
		const binary_tree_t *current = queue[front++];

		if (not_full_node && (current->left || current->right))
		{
			return (0);
		}
		/*If only the right child is present, it's not a complete tree*/
		if (current->left == NULL && current->right)
		{
			return (0);
		}
		/*If a node has only one child or no children, flag = 1*/
		if (current->left == NULL || current->right == NULL)
		{/*it is a leaf node*/
			not_full_node = 1;
		}
		/*enqueue left and right children if they exists*/
		if (current->left)
		{
			queue[rear++] = current->left;
		}
		if (current->right)
		{
			queue[rear++] = current->right;
		}
	}
	return (1);
}
