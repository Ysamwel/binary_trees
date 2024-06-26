#include "binary_trees.h"
/**
 * binary_tree_insert_right - this function inserts a node to the
 *                            right_child of another node.
 * @parent: is a pointer to the node to insert the right-child.
 * @value: is the value to store in the new node.
 * Requirement: If parent already has a right-child,
 *              the new node must take its place, and the
 *              old right-child must be set as the right-child of the new node.
 * Return: a pointer to the created node, NULL on failure
 *         Null if parent is null.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;
	return (new_node);


}
