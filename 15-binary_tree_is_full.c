#include "binary_trees.h"

/**
 *binary_tree_is_full - A function that checks if a binary tree is full
 *@tree: A pointer to the node of the tree to check
 *
 *Return: The ret statement is 0 when tree is NULL
 *      else 1 when the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
/*when a tree is null ret 0*/
if (!tree)
return (0);

if (!tree->left && !tree->right)
return (1);

if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
return (0);

}
