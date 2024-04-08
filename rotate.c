#include "monty.h"

/**
 * _rotl - Moves the top element of the stack to the bottom. The second element
 * becomes the first one.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_rotl" is an opcode that moves the top element to the
 * bottom; pushing each other element up by one position in turn. First, the
 * "temp1" and "temp2" pointers are set. temp1 is set to "(*stack)->next" and
 * temp2 to "*stack". "temp2->next" is moved linearly forward through the
 * stack until it points to "NULL", at which point "temp2" itself will point
 * to the last element on the stack. Now that the first, second, and last
 * nodes are being pointed to, prev and next pointers are modified to put
 * the previous head of the stack at the bottom, leaving the previous second
 * element as the head.
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1 = NULL;
	stack_t *temp2 = NULL;
	(void)line_number;

	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
		return;

	temp1 = (*stack)->next;
	temp2 = *stack;

	for (; temp2->next != NULL; temp2 = temp2->next)
		;

	temp1->prev = NULL;
	temp2->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = temp2;
	*stack = temp1;
}

/**
 * _rotr - Reverses the stack
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_rotr" is an opcode that reverses the stack. After setting
 * "temp" to be a pointer to "*stack", "temp->next" is moved through the stack
 * until it points at "NULL"; making the previous head of the stack reside at
 * the bottom of it. "temp->prev->next" disconnects the last node from the
 * previous node, effectively making the previous node the last node.
 * "temp->next" is set to the original head of the stack, creating a circular
 * linked list. "(*stack)->prev" is set to point to "temp", which is presently
 * the last node, completing the circular link. Finally, "*stack = temp" will
 * reverse the stack by having the pointer to the head of the stack point to
 * the last node.
 */

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	(void)line_number;

	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
		return;

	temp = *stack;

	for (; temp->next != NULL; temp = temp->next)
		;

	temp->prev->next = NULL;
	temp->next = *stack;
	temp->prev = NULL;
	(*stack)->prev = temp;
	*stack = temp;
}
