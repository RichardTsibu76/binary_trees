#include "binary_trees.h"


/**
 *binary_tree_is_root - This fucntion checks if a given
 *      node is a root
 *@node: a pointer to the node to the given node
 *
 *Return: Must ret 1 if node is root
 *      otherwise 0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
/*The return statemnent  using the ternary operator*/
return ((!node || node->parent) ? 0 : 1);
}
