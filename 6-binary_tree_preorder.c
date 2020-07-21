#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function
 *
 * Return: Always 0 (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}