#include "binary_trees.h"

/**
 *binary_tree_is_leaf - This is a fucntion that
 *      checks if a node is a leaf
 *@node: The node we need to consider to see
 *Return: returns one on leaf, ret 0 not being
 *      or 0 if null
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
return ((!node || node->left || node->right) ? 0 : 1);
}
