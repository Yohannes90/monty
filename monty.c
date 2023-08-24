#include "monty.h"
global_var var_global;

/**
 * main - entry point to program
 * @ac: argument count
 * @av: argument vector(file)
 *
 * Return: 0
*/
int main(int ac, char **av)
{
	stack_t *stack, *tmp;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(av[1], &stack);
	while (stack != NULL)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
	return (0);
}
