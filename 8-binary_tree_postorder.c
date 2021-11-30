/*
* 8-binary_tree_postorder.c - through binary tree using post-order transversal
* Author: Juan Sebastian Tovar Mogollon and Rodrigo Zárate Algecira
* Date: November 30, 2021
*/

#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree
 *                         using post-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: The value in the node must be passed as a parameter to this function.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
