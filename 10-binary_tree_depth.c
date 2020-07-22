#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function
 * @tree: input tree
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t counter = 0;

if (!tree)
return (0);

while (tree->parent)
{
counter++;
tree = tree->parent;
}
return (counter);
}
