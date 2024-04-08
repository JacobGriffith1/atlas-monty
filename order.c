#include "monty.h"

/**
 * _stack - Sets the format of the data to a stack (LIFO).
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_stack" is an opcode that sets the data's format to a stack.
 * It does this by setting the global variable, "gvar.lifo", to 1, and then
 * using that variable in the "_push" opcode to put new data in the right spot.
 */

void _stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	gvar.lifo = 1;
}

/**
 * _queue - Sets the format of the data to a queue (FIFO).
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_queue" is an opcode that sets the data's format to a queue.
 * It does this by setting the global variable, "gvar.lifo", to 0, and then
 * using that variable in the "_push" opcode to put new data in the right spot.
 */

void _queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	gvar.lifo = 0;
}
