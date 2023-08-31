#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid
 * checks if a tree is a binary search tree or not
 * @tree:  is a pointer to the root node of the tree to check
 * Return: 1 if tree is valid otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{/*using inorder traversal, store result in array*/
	/*if the array is sorted in ascending order then = bst*/

	const binary_tree_t *prev = NULL;


	/*traverse the tree in inorder fashion*/
	if (tree)
	{
		if (!binary_tree_is_bst(tree->left))
			return (0);
		if (prev != NULL && tree->n <= prev->n)
			return (0);

		prev = tree;
		return (binary_tree_is_bst(tree->right));
	}
	return (1);
}
