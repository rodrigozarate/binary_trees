/*
* 1-binary_tree_insert_left.c - Insert node at left side of binary tree
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Insert a node at left side of binary tree
* @parent: Pointer to parent
* @value: The value to insert in node
* Return: Left new node pointer
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	left_node = binary_tree_node(parent, value);
	if (left_node == NULL)
	{
		return (NULL);
	}
	left_node->left = parent->left;

	if (left_node->left != NULL)
	{
		left_node->left->parent = left_node;
	}
	parent->left = left_node;

	return (left_node);
}
