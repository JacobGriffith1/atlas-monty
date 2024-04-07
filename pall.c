#include "monty.h"

/**
 * _pall - Prints all values on the stack.
 * @stack: The head of the stack.
 * @line_number: Line number. Unused in this opcode.
 * Return: N/A
 *
 * Description - "_pall" is an opcode used to print all the values on the
 * stack. It does this with a linked list, using a pointer called "node",
 * which signifies the position in the stack, to traverse the stack,
 * printing the value contained within the node to stdout using printf.
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	(void)line_number;

	node = *stack;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
