#include "binary_trees.h"

/**
 *binary_tree_postorder - This function uses post-order traverse
 *      to go through the binary tree
 *@tree: Target of travesal
 *@func: Points to function for calling each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
/*Recursive call that traverse the left subtree of the current node*/
binary_tree_postorder(tree->left, func);
/*Rcursive call that traverses the right subree of the current node*/
binary_tree_postorder(tree->right, func);
func(tree->n);
}
