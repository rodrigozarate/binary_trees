/*
* 5-binary_tree_is_root.c - Check if node is root
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include "binary_trees.h"

/**
* binary_tree_is_root - Check if node is root
* @node: const pointer
* Return: int
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if(node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
