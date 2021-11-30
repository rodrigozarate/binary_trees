/**
* 2-binary_tree_insert_right.c - Insert node at left side of binary tree
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/
#include "binary_trees.h"
#include <stddef.h>

/**
* binary_tree_insert_right - Insert a node at left side of binary tree
* @parent: Pointer to parent
* @value: The value to insert in node
* Return: right new node pointer
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	return (new_node);
}
