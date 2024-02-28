#include "binary_trees.h"

/**
 *binary_tree_size - A function that measures
 *       the size of a binary tree.
 *
 *@tree: A pointer
 *
 *Return: returns 0 if the root is null else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
/*using the ternary operator*/
return (!tree ? 0 : binary_tree_size(tree->left) +
binary_tree_size(tree->right) + 1);
}
