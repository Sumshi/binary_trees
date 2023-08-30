#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree:  pointer to the root node of the tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	/*recursively deletes left, right nodes and root node*/
	binary_tree_delete(tree->left);/*deletes left subtree*/
	binary_tree_delete(tree->right);/*deletes right sub tree*/
	free(tree);/*deletes current node*/
}
