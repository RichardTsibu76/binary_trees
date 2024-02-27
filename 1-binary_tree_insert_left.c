#include "binary_trees.h"

/**
 *binary_tree_insert_left - This inserts a node
 *
 *@parent: This is a pointer to the node
 *@value: Stores the node
 *
 *Description - If parent already has a left-child, the new node must
 *             take its place, and the old left-child must be set as
 *          the left-child of the new node.
 *
 *Return: A pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *NEW;

if (!parent)
return (NULL);
/*Dynamically allocating memory for the node */
NEW = malloc(sizeof(binary_tree_t));

if (!NEW)

return (NULL);
NEW->n = value;
NEW->parent = parent;
NEW->right = NULL;
NEW->left = parent->left;
parent->left = NEW;
if (NEW->left)
NEW->left->parent = NEW;
return (NEW);
}
