#include "binary_trees.h"
/**
*binary_tree_height - measures the height of a binary tree
*@tree: pointer to the root node of the tree to measure the height
*Return: size of thre tree on success
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (0);
	while (temp->left != NULL || temp->right != NULL)
	{
		if (temp->left)
		{
			temp = temp->left;
			count += 1;
		}
		else if (tree->right)
		{
			temp = temp->right;
			count += 1;
		}
	}
	return (count);
}
