#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a tree
 * @tree: a pointer to the node to measure the depth
 * Return: the depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
