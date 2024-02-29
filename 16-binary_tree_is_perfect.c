#include "binary_trees.h"
/**
 *binary_height - Finds the height of each subnode
 *@tree: A pointer to the node of tree
 *Return: Height
 */

int binary_height(const binary_tree_t *tree)
{
int height_l, height_r;

if (!tree)
return (0);
height_l = (tree->left) ? 1 + binary_tree_is_perfect(tree->left) :
0;
height_r = (tree->right) ? 1 + binary_tree_is_perfect(tree->right)
: 0;
return ((height_l > height_r) ? height_l : height_r);
}


/**
 *binary_tree_is_perfect - Checks if binary tree is perfect
 *@tree: A pointer
 *Description: Task b_tree
 *Return: returns
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (binary_height(tree->left) != binary_height(tree->right))
return (0);

if (!tree->left && !tree->right)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));

return (0);
}
