#include "binary_trees.h"
/**
 * binary_tree_insert_left - this function inserts a new node to the left.
 * @parent:  is a pointer to the node to insert the left-child in.
 * @value:  is the value to store in the new node.
 * Requirement: If parent already has a left-child, the new
 *              node must take its place and the old left-child must
 *             be set as the left-child of the new node.
 * Return: a pointer to the new node, NULL on failure,
 *         NULL when parent is empty.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	return (new_node);
}
