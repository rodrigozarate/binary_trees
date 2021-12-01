/*
* 2-binary_tree_insert_right.c - Insert node at right side of binary tree
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - Insert a node at right side of binary tree
* @parent: Pointer to parent
* @value: The value to insert in node
* Return: Left new node pointer
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
	{
		return (NULL);
	}
	right_node->right = parent->right;

	if (right_node->right != NULL)
	{
		right_node->right->parent = right_node;
	}
	parent->right = right_node;

	return (right_node);
}
