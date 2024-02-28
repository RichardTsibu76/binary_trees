#include "binary_trees.h"
#include <stddef.h>

/**
 *binary_tree_depth - This is fucntion that measures the depth
 *      of a node in a binary tree
 *@tree: A pointer to the root of the root to measure
 *      the depth
 *Return: 0 if tree is Null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
/*initailizing the variable depth to 0 for the storing the */
/* the depth of the node */
size_t depth = 0;

if (!tree)
return (0);
/*the while loop traversing pnode of currnt nofe until reaches the root node*/
while (tree->parent)
{
depth++;
/*update the tree pointer to points to it parent node under the increemets*/
tree = tree->parent;
}

return (depth);
}
