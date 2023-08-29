#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  is a pointer to the node to check
 * Return: 0 if tree is null
 * a binarytree is perfect, if all nodes have two children
 * and all leaves are on the same level
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/*get the height of left subtree*/
	left_height = binary_tree_height(tree->left);

	/*get the height of right subtree*/
	right_height = binary_tree_height(tree->right);

		if (left_height != right_height)
		{
			return (0);/*not perfect*/
		}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}


/**
 * binary_tree_height - measures the height of a binary tree
 * or the maximum depth of a binary tree
 * @tree:  is a pointer to the root node of the tree
 * Return: 0 if the tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{/*height of binary tree = 1 + the number of edges*/
	/*on the longest path from the root to the leaf*/

	int left = 0;
	int right = 0;


	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left += 1 + binary_tree_height(tree->left);/*left height of tree*/

	}
	if (tree->right)
	{
		right += 1 + binary_tree_height(tree->right);/*left height of tree*/

	}
	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}
