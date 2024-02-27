#include "binary_trees.h"

/**
 *binary_tree_insert_right - This is the fucntion
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Description: If the parent
 * Return: a pointer
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *New;

if (!parent)

return (NULL);

/*Dynamically allocating memory for the new node*/
New = malloc(sizeof(binary_tree_t));
if (!New)
return (NULL);

New->n = value;
New->parent = parent;
New->left = NULL;
New->right = parent->right;
parent->right = New;
if (New->right)
New->right->parent = New;
return (New);
}
