#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0 or height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (auxbalancer(tree->left) - auxbalancer(tree->right));
}

/**
 * auxbalancer - auxiliar balancing function measure the balance factor
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */
size_t auxbalancer(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (((auxbalancer(tree->left) + 1) > (auxbalancer(tree->right) + 1)) ?
		(auxbalancer(tree->left) + 1) : (auxbalancer(tree->right) + 1));
}
