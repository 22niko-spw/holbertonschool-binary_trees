#include "binary_trees.h"
#include <stdlib.h>
/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
static size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + (height(tree->left) > height(tree->right) ?
		height(tree->left) : height(tree->right)));
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}
