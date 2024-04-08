#include "monty.h"

/**
 * _nop - It doesn't do anything.
 * @stack: The stack
 * @line_number: Line number
 * Return: N/A
 *
 * Description - Sometimes, just existing is enough. This opcode,
 * "_nop" is that sometimes. It doesn't do anything useful, useless,
 * or use-neutral. It simply sits there and stares into the void,
 * which all it has ever known, or will know.
 */

void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
