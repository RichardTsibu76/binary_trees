#include "binary_trees.h"

/**
 *binary_trees_ancestor - A function that finds lowest common
 *      ancestor of two nodes
 *@first: A pointer to the first node
 *@second: A pointer to the second node
 *
 *Return: returns a pointer to the lowest common ancestor
 *      node of the two given nodes
 *      if no common ancestor was found , must return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
size_t d_f, d_s;

if (!first || !second)
return (NULL);
d_f = binary_tree_depth(first);
d_s = binary_tree_depth(second);

while (d_f > d_s)
{
first = first->parent;
d_f--;
}
while (d_s > d_f)
{
second = second->parent;
d_s--;
}
while (first && second)
{
if (first == second)
return ((binary_tree_t *)first);
first = first->parent;
second = second->parent;
}
return ((binary_tree_t *)first);
}

/**
 *binary_tree_depth - This function measures the depth of a
 *        node
 *@tree: A pointer
 *
 *Return: depth of the node
 *      0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (!tree)
return (0);

while (tree->parent)
{
depth++;
tree = tree->parent;
}

return (depth);
}
