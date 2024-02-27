#include "binary_trees.h"

/**
 *binary_tree_delete - A fucntion that deletes an entire btree
 *@tree: Points to the node of the tree to delete
 *Description: nothing on null otherwise do something tree is not null
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
}
