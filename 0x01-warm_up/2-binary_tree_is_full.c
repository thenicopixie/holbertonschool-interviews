#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l = 1 + binary_tree_is_full(tree->left);
	if (tree->right)
		r = 1 + binary_tree_is_full(tree->right);
	if (l - r == 0)
		return (1);
	return (0);
}
