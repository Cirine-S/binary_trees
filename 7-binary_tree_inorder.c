#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - function
 * @func: function to call
 * @tree: input tree
 * Return: Always 0 (Success)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
