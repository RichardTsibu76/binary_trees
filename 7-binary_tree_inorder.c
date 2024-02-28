#include "binary_trees.h"

/**
 *binary_tree_inorder - A fucntion that goes through a binary tree
 *      using in-order traversal
 *@func: A pointer to a function to call for each node
 *@tree: A pointer to the root node of the tree to traverse
 *Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_inorder(tree->left, func);
func(tree->n);
/*Recursive call that traverses the rigt subtree of the current node*/
/*During the an inoder traversal of the binary tree*/
binary_tree_inorder(tree->right, func);
}
