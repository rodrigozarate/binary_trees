/*
* 17-binary_tree_sibling.c - finds the sibling of a node
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: December 1, 2021
*/

#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to node
* Return: binary_tree_t pointer
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);

	return (node->parent->right);
}

