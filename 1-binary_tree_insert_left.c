#include "binary_trees.h"
#include <stdio.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int n;

	if (parent->left != NULL)
	{
		n = parent->left->n;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = binary_tree_node(parent->left, n);
	}
	else
		parent->left = binary_tree_node(parent, value);

	return parent->left;
}
