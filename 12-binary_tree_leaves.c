/*
* 12-binary_tree_leaves.c - counts the leaves in a binary tree.
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: If tree is NULL, returns (0).
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
