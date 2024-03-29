#include "binary_trees.h"
/**
 * binary_tree_delete - this function deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete.
 * Requirement: if tree is null return nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	{
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
	}
}
