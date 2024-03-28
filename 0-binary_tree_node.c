#include "binary_trees.h"

/**
 * binary_tree_node - this function creates a binary tree node.
 * @parent:a pointer to the parent node.
 * @value: the integer value to add to the new node.
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*allocating memory for the new node using malloc*/
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
