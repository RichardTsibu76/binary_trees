#include "binary_trees.h"

/**
 *binary_tree_sibling - This finds the sibling of a node in b_tree
 *@node: Where node is a pointer to the node to find the sibling
 *
 *Return: Returns a pointer to the sibling
 *  if node is NULL or the is NULL , returns NULL
 *  if node has no sibling then return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

if (node == node->parent->left) /*checks if node is left child of parent*/
return (node->parent->right);
return (node->parent->left);
}
