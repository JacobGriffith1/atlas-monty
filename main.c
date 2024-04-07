#include "monty.h"

/**
 * free_gvar - Frees any global variables.
 * Return: N/A.
 */

void free_gvar(void)
{
	free_node(gvar.head);
	free(gvar.buffer);
	fclose(gvar.fd);
}

/**
 * start_gvar - Initializes global variables.
 * @fd: File descriptor.
 * Return: N/A.
 */

void start_gvar(FILE *fd)
{
	gvar.lifo = 1;
	gvar.current = 1;
	gvar.arg = NULL;
	gvar.head = NULL;
	gvar.fd = fd;
	gvar.buffer = NULL;
}

/**
 * input_checker - Verifies if the designated
 * file exists and can be opened.
 * @argc:
 * @argv:
 * Return: file struct pointed to by fd
 */

FILE *input_checker(int argc, char *argv[])
{
	FILE *fd;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");

	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	return (fd);
}

/**
 * main - Entry point for the Monty program.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	void (*f)(stack_t **stack, unsigned int line_number);
	FILE *fd;
	size_t size = 256;
	ssize_t nlines = 0;
	char *lines[2] = {NULL, NULL};

	fd = input_checker(argc, argv);
	start_gvar(fd);
	nlines = getline(&gvar.buffer, &size, fd);
	while (nlines != -1)
	{
		lines[0] = strtok(gvar.buffer, " \t\n");
		if (lines[0] && lines[0][0] != '#')
		{
			f = get_opcodes(lines[0]);
			if (!f)
			{
				fprintf(stderr, "L%u: ", gvar.current);
				fprintf(stderr, "unknown instruction %s\n", lines[0]);
				free_gvar();
				exit(EXIT_FAILURE);
			}
			gvar.arg = strtok(NULL, " \t\n");
			f(&gvar.head, gvar.current);
		}
		nlines = getline(&gvar.buffer, &size, fd);
		gvar.current++;
	}
	free_gvar();

	return (0);
}
