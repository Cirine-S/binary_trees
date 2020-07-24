#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance(- Function
 * @tree: input tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lefth, righth;

	if (!tree)
		return (0);
	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);
	return (lefth - righth);
}