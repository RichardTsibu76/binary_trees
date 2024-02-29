#include "binary_trees.h"
/**
 *binary_tree_uncle - Finds the uncle of a node
 *@node: points to the node to find the uncle
 *Return: A pointer to the uncle node
 *  if node is NULL, return NULL, if node has no uncle,
 *  return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

return (binary_tree_sibling(node->parent));
}
/**
 *binary_tree_sibling - Finds sibling
 *@node: This is a pointer to the node to find the sibling
 *
 *Return: ret. a pointer to the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);
if (node == node->parent->left)
return (node->parent->right);
return (node->parent->left);
}
