#include "binary_trees.h"

/**
 *binary_tree_nodes - This function counts the node
 *      with at least 1 child in a b_tree
 *@tree: Target to count from (A pointer to the root node)
 *
 *Return: if tree is null return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree || (!tree->left && !tree->right))
return (0);

return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 *binary_tree_size - This function measures the size of b_tree
 *@tree: Targeted tree to be measured
 *
 *Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 *binary_tree_leaves - This counts the leaves
 *@tree: Where the counts is from
 *Return: returns the number of leaves countered
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)/*if tree is null*/
return (0);

if (!tree->left && !tree->right)/*a check for both are null*/
return (1);
/*making acessing and recursive calling */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
