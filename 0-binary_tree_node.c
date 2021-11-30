/*
* 0-binary_tree_node.c - Create a Binary tree node
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_node - Create a binary tree node
* @parent: Pointer to parent
* @value: The value to insert in node
* Return: Binary tree node pointer
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
	{
		return (NULL);
	}
	tree->parent = parent;
	tree->n = value;
	tree->right = NULL;
	tree->left = NULL;

	return (tree);
}
