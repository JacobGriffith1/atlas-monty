#include "monty.h"

/**
 * add_nodevalue - Adds a node at the beginning of the stack.
 * @head: First position in the stack.
 * @n: Value to store in the node.
 * Return: The stack.
 */

stack_t *add_nodevalue(stack_t **head, const int n)
{
	stack_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(stack_t));
	if (!temp)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	(*head)->prev = temp;
	temp->next = (*head);
	temp->prev = NULL;
	*head = temp;
	return (*head);
}

/**
 * add_nodevalue_end - Adds a node at the end of the stack.
 * @head: First position in the stack.
 * @n: Value to store in the node.
 * Return: The stack.
 */

stack_t *add_nodevalue_end(stack_t **head, const int n)
{
	stack_t *temp, *node;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(stack_t));
	if (!temp)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	node = *head;
	while (node->next)
		node = node->next;
	temp->next = node->next;
	temp->prev = node;
	node->next = temp;
	return (node->next);
}

/**
 * free_node - Frees each node in the stack.
 * @head: Head of the stack.
 * Return: N/A
 */

void free_node(stack_t *head)
{
	stack_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
