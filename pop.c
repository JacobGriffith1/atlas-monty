#include "monty.h"

/**
 * _pop - Removes, or 'pops', the top element of the stack.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_pop" is an opcode that removes the top element in
 * the stack. After checking for an element to remove, it simply adjusts
 * some pointers pertaining to values in the stack and frees the topmost one;
 * effectively removing the element.
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: ", line_number);
		fprintf(stderr, "can't pop an empty stack\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
