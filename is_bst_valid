#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid
 * checks if a tree is a binary search tree or not
 * @tree:  is a pointer to the root node of the tree to check
 * Return: 1 if tree is valid otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_bst_helper(tree, NULL, NULL));
}

/**
 * is_bst_helper - recursive helper function to check if a tree is a valid BST
 * @tree: pointer to the current node being checked
 * @min: pointer to the minimum valid value for the current node
 * @max: pointer to the maximum valid value for the current node
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int is_bst_helper(const binary_tree_t *tree,
		const binary_tree_t *min, const binary_tree_t *max)
{
	if (tree == NULL)/*is an empty tree hence = bst*/
		return (1);

	if ((min && tree->n <= min->n) || (max && tree->n >= max->n))
		return (0);

	return (is_bst_helper(tree->left, min, tree)
			&& is_bst_helper(tree->right, tree, max));
}
