#include "binary_trees.h"
/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree:  is a pointer to the root node of the tree
 *Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);


}
