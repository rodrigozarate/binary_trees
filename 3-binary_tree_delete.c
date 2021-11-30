/*
* 3-binary_tree_delete.c - Delete an entire Binary tree
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include "binary_trees.h"

/**
* binary_tree_delete - Delete an entire binary tree
* @tree: Pointer to tree to delete
* Return: Void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
