#include "binary_trees.h"
/**
 * binary_tree_preorder - This fuction goes through a binary tree
 *      using in-order traversal
 *@tree: This is the pointer to the tree
 *@func: This is a pointer to a function to call for each node
 *      the value must be passed as a parameter to this fucntion
 *      if tree or func is NULL do nothing
 *Return: Does not return its void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
/*when checks and either tree or func is null */
    /*its immediately returns to the fucnton*/
    /*otherwise it proceeds to executes the prooder traversal logic*/
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
