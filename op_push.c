#include "monty.h"

/**
 * push - Pushes (adds) an integer to the stack.
 * @stack: The stack that the integer will be pushed to the top of.
 * @line_number: The line from which the integer will be pushed.
 * Return: N/A
 *
 * Description - "push" is a command that will extract an integer from the
 * variable "line number", assign the integer the designation "value",
 * and append the integer to the top of the "stack".
 */

void push(stack_t **stack, unsigned int line_number)
{
	/*Parse the argument from the line*/
	/*strtok or sscanf can be used to extract the int argument*/
	int value; /*Extracted int value*/

	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	/*Create a new stack node and set its value*/
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;

	/*Set the new node's next pointer to the current top of the stack*/
	new_node->next = *stack;

	/*Update the stack's top to the new node*/
	*stack = new_node;
}
