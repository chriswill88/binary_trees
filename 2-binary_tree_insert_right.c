#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int n;

	if (parent->right != NULL)
	{
		n = parent->right->n;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = binary_tree_node(parent->right, n);
	}
	else
		parent->right = binary_tree_node(parent, value);

	return parent->right;
}
