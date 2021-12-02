/*
* 16-binary_tree_is_perfect.c - checks if a binary tree is perfect
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: December 30, 2021
*/

#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 * Return: - 1 if node is a leaf, otherwise 0.
 *         - If node is NULL, return 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	else
		return (0);
}

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

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	if (height_left >= height_right)
	{
		return (height_left + 1);
	}
	return (height_right + 1);
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: Pointer to tree
* Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	size_t balance_r, balance_l;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);
	if (left == NULL || right == NULL)
		return (0);
	balance_r = binary_tree_height(right);
	balance_l = binary_tree_height(left);
	if (balance_r == balance_l)
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);
}
