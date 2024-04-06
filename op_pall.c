#include "monty.h"

/**
 * pall - Prints all values on the stack; LIFO.
 * @stack: The stack of integers. Will be printed with pall.
 * Return: N/A
 *
 * Description - pall is an opcode that prints all values of the
 * "stack"; iterating through them by reassigning the value of
 * "current"; which corresponds to the top element in the stack.
 */

void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
