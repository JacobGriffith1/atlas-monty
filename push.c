#include "monty.h"

/**
 * _push - Adds, or pushes, an element to the stack.
 * @stack: Head of the stack.
 * @line_number: Line number. Used to designate where an error is located.
 * Return: N/A
 *
 * Description: "_push" is an opcode used to add elements onto the stack;
 * either at the beginning or end. It does this by checking for an appropriate
 * input, then converting the input to an integer with "atoi". Based on if
 * the value of "gvar.lifo" is 1, the integer will be added to the stack at
 * the beginning ("add_nodevalue") or end ("add_nodevalue_end").
 */

void _push(stack_t **stack, unsigned int line_number)
{
	int n, i;

	if (!gvar.arg)
	{
		fprintf(stderr, "L%u: ", line_number);
		fprintf(stderr, "usage: push integer\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}

	for (i = 0; gvar.arg[i] != '\0'; i++)
	{
		if (!isdigit(gvar.arg[i]) && gvar.arg[i] != '-')
		{
			fprintf(stderr, "L%u: ", line_number);
			fprintf(stderr, "usage: push integer\n");
			free_gvar();
			exit(EXIT_FAILURE);
		}
	}

	n = atoi(gvar.arg);

	if (gvar.lifo == 1)
		add_nodevalue(stack, n);
	else
		add_nodevalue_end(stack, n);
}
