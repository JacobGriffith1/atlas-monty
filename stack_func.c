#include "monty"

/**
 *
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
		temp->next = *head
