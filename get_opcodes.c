#include "monty.h"

/**
 * _get_opcodes - Selects opcode to execute.
 * @opc: Opcode passed.
 * Return: Pointer to the function that executes opcode.
 */

void (*_get_opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instruct[i].opcode; i++)
	{
		if (strcmp(instruct[i].opcode, opc) == 0)
			break;
	}
	return (instruct[i].f);
}
