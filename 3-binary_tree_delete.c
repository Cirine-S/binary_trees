#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - function
 *@tree: input tree
 * Return: Always 0 (Success)
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

/* first delete both subtrees recursively*/
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

free(tree);
}
