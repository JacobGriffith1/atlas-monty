#include "monty.h"

/**
 * _pint - Prints the value at the top of the stack.
 * @stack: The stack.
 * @line_number: The line number.
 * Return: N/A
 *
 * Description - "_pint" is an opcode used to print the value at the top of
 * the stack. After verifying that the stack is not empty, it simply prints
 * the contents of the address pointed to by "(*stack)->n" to stdout.
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: ", line_number);
		fprintf(stderr, "can't pint, stack empty\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
