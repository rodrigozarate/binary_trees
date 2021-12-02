/*
* 15-binary_tree_is_full.c - checks if a binary tree is full
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: December 1, 2021
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
* binary_tree_is_full - checks if a binary tree is full
* @tree: pointer to tree
* Return: int
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) != 0)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
