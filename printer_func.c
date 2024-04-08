#include "monty.h"

/**
 * _pchar - Prints the character at the top of the stack
 * @stack: The stack
 * @line_number: Line number
 * Return: N/A
 *
 * Description -
 */

void _pchar(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: ", line_number);
		fprintf(stderr, "can't pchar, stack empty\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: ", line_number);
		fprintf(stderr, "can't pchar, value out of range\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
