#include "monty.h"

/**
 * _rotl - Moves the top element of the stack to the bottom. The second element
 * becomes the first one.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description -
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1 = NULL;
	stack_t *temp2 = NULL;
	(void)line_number;

	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
		return;

	for (; temp2->next != NULL; temp2 = temp2->next)
		;

	temp1->prev = NULL;
	temp2->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = temp2;
	*stack = temp1;
}
