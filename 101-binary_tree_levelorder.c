#include "binary_trees.h"

/**
 *binary_tree_levelorder - A function that traverst
 *    a binary tree using level-order traverse
 *@tree: Target
 *@func: A pointer
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
size_t lev, maxlev;

if (!tree || !func)
return;

maxlev = binary_tree_height(tree) + 1;

for (lev = 1; lev <= maxlev; lev++)
btlo_helper(tree, func, lev);
}

/**
 *btlo_helper - This function goes through 
 *       a binary tree using post-order traverse
 *@tree: Target
 *@func: A pointer
 *@level: level
 */
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
if (level == 1)
func(tree->n);
else
{
btlo_helper(tree->left, func, level - 1);
btlo_helper(tree->right, func, level - 1);
}
}

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: tree to measure the height of
 *
 *Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t h_l = 0;
size_t h_r = 0;

if (!tree)
return (0);

h_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
h_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (h_l > h_r ? h_l : h_r);
}
