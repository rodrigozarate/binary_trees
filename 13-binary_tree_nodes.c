/*
* 13-binary_tree_nodes.c - counts the nodes with at least 1 child
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
* binary_tree_node - Create a binary tree node
* @tree: Pointer to tree
* Return: size_t
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ch_left, ch_right;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);

	ch_left = binary_tree_nodes(tree->left);
	sh_right = binary_tree_nodes(tree->right);

	return (ch_left + ch_right + 1);
}
