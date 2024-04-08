#include "monty.h"

/**
 * _pchar - Prints the character at the top of the stack
 * @stack: The stack
 * @line_number: Line number
 * Return: N/A
 *
 * Description - "_pchar" is an opcode that prints the character at the top of
 * the stack. After checking for a valid character on the stack, the character
 * is printed to stdout.
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

/**
 * _pstr - Prints the string starting at the top of the stack.
 * @stack: The stack
 * @line_number: Line number
 * Return: N/A
 *
 * Description - "_pstr" is an opcode that prints the string of the stack.
 * This works similarly to "_pchar", in that it checks for a valid ASCII
 * character, but it proceeds to check the character of each position in the
 * string, printing them to stdout as it proceeds.
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;

	while (temp && temp->n > 0 && temp->n < 128)
	{
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
