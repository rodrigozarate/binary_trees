/*
* 14-binary_tree_balance.c - measures the balance factor of a binary tree
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to tree
* Return: size_t height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	if (height_left >= height_right)
	{
		return (height_left + 1);
	}
	return (height_right + 1);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: Pointer to tree
* Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
