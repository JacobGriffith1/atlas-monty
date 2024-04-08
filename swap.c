#include "monty.h"

/**
 * _swap - Swaps the top two elements on the stack.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_swap" is an opcode that swaps the first two elements on the
 * stack. By redefining the values associated with pointers, it completes this
 * task as follows;
 * 1. The "temp" pointer points to *stack.
 * 2. The "*stack" pointer points to (*stack)->next (second node on stack).
 * 3. The temp->next pointer points to (*stack)->next; both point to the same
 * ...address now.
 * 4. temp->prev points to *stack (which is presently the second node).
 * 5. (*stack)->next points to temp (putting stack before temp).
 * 6. (*stack)->prev points to NULL, signifying that it is first on the stack.
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int nodect = 0;
	stack_t *temp;

	temp = *stack;

	for (; temp != NULL; temp = temp->next, nodect++)
		;
	if (nodect < 2)
	{
		fprintf(stderr, "L%u: ", line_number);
		fprintf(stderr, "can't swap, stack too short\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	temp->prev = *stack;
	(*stack)->next = temp;
	(*stack)->prev = NULL;
}
