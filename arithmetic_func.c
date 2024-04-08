#include "monty.h"

/**
 * _add - Adds the top two elements of the stack.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description -
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
		fprintf(stderr, "");
		free_gvar();
		exit(EXIT_FAILURE);
	}
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
