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
 * _sub - Subtracts top element to the second element of the stack
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_sub" is an opcode that subtracts the value of the top
 * element to that of the second element on the stack. The value pointed to
 * by "(*stack)->n" (first node) is subtracted to the value pointed to by
 * "temp->n" (second node), and then the top node is popped, leaving the
 * appended value at the top of the stack.
 *
 * Author's note - that I personally find it fascinating how odd it sounds to
 * say 'subtract x to y' aloud, as opposed to 'subtract y from x', which is
 * the way I learned to speak about subtraction, despite the fact that both
 * phrases share the same literal meaning!
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
		fprintf(stderr, "can't sub, stack too short\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	temp->n -= (*stack)->n;
	_pop(stack, line_number);
}

/**
 * _mul - Multipies the top element on the stack by the second.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_mul" is an opcode that multiplies the top element of the
 * stack by the second. Works as "_add" or "_sub", but with the "( *= )"
 * operator appending "(*stack)->n" to "temp->n".
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
		fprintf(stderr, "can't mul, stack too short\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	temp->n *= (*stack)->n;
	_pop(stack, line_number);
}
/**
 * _div - Divides the second element by the top element on the stack.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_div" is an opcode that divides the second element on the
 * stack by the top element on the stack. Works as the other arithmetic
 * opcodes listed prior, but with the "( /= )" operator.
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
		fprintf(stderr, "can't div, stack too short\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	temp->n /= (*stack)->n;
	_pop(stack, line_number);
}
/**
 * _mod - Computes the rest of the division of the second element by the top
 * element on the stack.
 * @stack: The stack.
 * @line_number: Line number.
 * Return: N/A
 *
 * Description - "_mod" is an opcode that coputes the rest of the division of
 * the second element on the stack by the top element. Works as the other
 * arithmetic opcodes listed prior, but with the "( %= )" operator.
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
		fprintf(stderr, "can't mod, stack too short\n");
		free_gvar();
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	temp->n %= (*stack)->n;
	_pop(stack, line_number);
}
