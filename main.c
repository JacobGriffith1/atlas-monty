#include "monty.h"

/**
 * main - The main function of the Monty interpreter.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: EXIT_SUCCESS
 *
 * Description - "main" is a function that is responsible for conducting
 * the actions taken by the Monty bytecode interpreter. It checks if the
 * entered command is formatted correctly (printing an error message if not)
 * and then iterates through each line, executing the contained instructions.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	FILE *file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*Initialize the global stack*/
	global_stack = NULL;
	/*Parse the file line-by-line and execute the instructions*/
	void (*f)(stack_t **stack, unsigned int line_number);
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	char *parlines[2] = {NULL, NULL};

	while (getline(&line, &len, file) != -1)
	{
		parlines[0] = strtok(line, " \t\n");
		if (parlines[0] && parlines[0][0] != '#')
		{
			f = _get_opcodes(parlines[0]);
			if (!f)
			{
				fprintf(stderr, "Line %u: ", line_number);
				fprintf(stderr, "Error: Unknown instruction %s\n", parlines[0]);
				exit(EXIT_FAILURE);
			}
		line_number++;
		}
	}
	/*Clean up, close file*/
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
