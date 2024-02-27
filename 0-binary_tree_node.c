#include "binary_trees.h"

/**
 *binary_tree_node - This fucntion creates a new binary tree node
 *@parent: - A pointer
 *@value: - is the value to put in the new node
 *Return: This returns a pointer otherwise null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

/*Dynamically allocating space fot the created node*/
newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

if (newNode == NULL)
{
return (NULL);
}

/* assign values to the properties of the node */
newNode->parent = parent;
newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;

/* return a pointer to the node */
return (newNode);
}
