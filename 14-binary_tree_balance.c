#include "binary_trees.h"
/**
 *binary_height - This calculates the height of a node
 *@tree: A pointer
 *Return: Height with value
 */

int binary_height(const binary_tree_t *tree)
{
int h_l, h_r;
/*let h_l denotes left height and vice for h_r*/

if (!tree)
return (0);

h_l = (tree->left) ? 1 + binary_height(tree->left) : 0;
h_r = (tree->right) ? 1 + binary_height(tree->right) : 0;

return ((h_l > h_r) ? h_l : h_r);
}


/**
 *binary_tree_balance - Measures the balance factor of the binary tree
 *@tree: Points to the root node of the tree
 *Return: balance factor or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int h_left, h_right;
/*let h represent height in this code*/
if (!tree)
return (0);

h_left = (tree->left) ? 1 + binary_height(tree->left) : 0;
h_right = (tree->right) ? 1 + binary_height(tree->right) : 0;

return (h_left - h_right);
}
