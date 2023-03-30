#include "binary_trees.h"

/**
*binary_tree_insert_left - inserts a node as the left-child of another node
*@parent: pointer to the node to insert the left-child in
*@value: value to store in the new node
*Return: pointer to the parent node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL || parent == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->parent = parent;
		if (parent->left == NULL)
		{
			parent->left = newNode;
		}
		else
		{
			binary_tree_t *temp;

			temp = malloc(sizeof(binary_tree_t));
			if (temp == NULL)
			{
				return (NULL);
			}
			temp = parent->left;
			parent->left = newNode;
			newNode->left = temp;
			free(temp);
		}
		newNode->n = value;
		newNode->right = NULL;
	}
	return (newNode);
}
