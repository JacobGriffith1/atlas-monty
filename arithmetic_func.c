#include "monty.h"

/**
 * _add - Adds the top two elements of the stack.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_add" is an opcode that adds the values of the top two
 * elements on the stack. The value pointed to by "(*stack)->n" (first node)
 * is added to the value pointed to by "temp->n" (second node), and then the
 * top node is popped, leaving the appended value at the top of the stack.
 */

void _add(stack_t **stack, unsigned int line_number)
{
	int nodect = 0;
	stack_t *temp = NULL;

	temp = *stack;

	for (; temp != NULL; temp = temp->next, nodect++)
		;
	if (nodect < 2)
	{
		fprintf(stderr, "L%d: ", line_number);
		fprintf(stderr, "can't add, stack to short");
		free_gvar();
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	temp->n += (*stack)->n;
	_pop(stack, line_number);
}

/**
 * _sub -
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description -
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	int nodect = 0;
	stack_t *temp = NULL;

	temp = *stack;

	for (; temp != NULL; temp = temp->next, nodect++)
		;
	if (nodect < 2)
	{
		fprintf(stderr, "L%d: ", line_number);
		fprintf(stderr, "");
		free_gvar();
		exit(EXIT_FAILURE);
	}
}

/**
 * _mul -
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description -
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	int nodect = 0;
	stack_t *temp = NULL;

	temp = *stack;

	for (; temp != NULL; temp = temp->next, nodect++)
		;
	if (nodect < 2)
	{
		fprintf(stderr, "L%d: ", line_number);
		fprintf(stderr, "");
		free_gvar();
		exit(EXIT_FAILURE);
	}
}
/**
 * _div -
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description -
 */

void _div(stack_t **stack, unsigned int line_number)
{
	int nodect = 0;
	stack_t *temp = NULL;

	temp = *stack;

	for (; temp != NULL; temp = temp->next, nodect++)
		;
	if (nodect < 2)
	{
		fprintf(stderr, "L%d: ", line_number);
		fprintf(stderr, "");
		free_gvar();
		exit(EXIT_FAILURE);
	}
}
/**
 * _mod -
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description -
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	int nodect = 0;
	stack_t *temp = NULL;

	temp = *stack;

	for (; temp != NULL; temp = temp->next, nodect++)
		;
	if (nodect < 2)
	{
		fprintf(stderr, "L%d: ", line_number);
		fprintf(stderr, "");
		free_gvar();
		exit(EXIT_FAILURE);
	}
}
