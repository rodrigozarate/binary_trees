/*
* 18-binary_tree_uncle.c - finds the uncle of a node
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: December 1, 2021
*/

#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: pointer to node
* Return: binary_tree_t pointer
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}
