/*
* 7-binary_tree_inorder.c - Goes through binary tree using in-order transversal
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include "binary_trees.h"
/**
* binary_tree_inorder - Goes through binary tree using in-order transversal
* @tree: pointer to Binary
* @func: void pointer to function
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
