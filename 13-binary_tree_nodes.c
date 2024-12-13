#include "binary_trees.h"
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: the root node of the tree
 *Return: balance measure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
/**
 *binary_tree_height - measures the height of binary tree
 *@tree: the root of tree
 *Return: size of left or right
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left += binary_tree_height(tree->left);
	right += binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
