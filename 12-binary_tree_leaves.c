#include "binary_trees.h"

/**
 *binary_tree_leaves - A function that counts leaves in b_tree
 *@tree: Targeted tree to count
 *
 *Return: Returns
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree) /*if tree is null return 0*/
return (0);

if (!tree->left && !tree->right)
return (1);

return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
