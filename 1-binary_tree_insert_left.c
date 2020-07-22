#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left- function
 * @parent: root
 * @value: int
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);
new_node = malloc(sizeof(binary_tree_t));
if (!new_node)
return (NULL);

if (parent->left)
{
new_node->left = parent->left;
new_node->left->parent = new_node;
}

new_node->n = value;
new_node->parent = parent;

return (new_node);
}
