#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - function
 *@node: pointer to input node
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;
    if (!node->right && !node->left)
        return 1;
    return 0;
}
