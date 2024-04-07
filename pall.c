#include "monty.h"

/**
 * _pall - Prints all values on the stack; LIFO.
 * @stack: The stack of integers. Will be printed with pall.
 * @line_number: UNUSED
 * Return: N/A
 *
 * Description - "_pall" is an opcode that prints all values of the
 * "stack"; iterating through them by reassigning the value of
 * "current"; which corresponds to the top element in the stack.
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	(void)line_number; /*UNUSED*/
}
