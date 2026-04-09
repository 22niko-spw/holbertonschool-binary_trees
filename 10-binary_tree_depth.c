#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 *
 * Return:
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
	return (0);

	if (tree->parent == NULL)
	return (0);

	else
	return (1 + binary_tree_depth(tree->parent));
}
