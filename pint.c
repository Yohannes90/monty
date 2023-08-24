#include "monty.h"

/**
 * _pint - print int a top of stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", current->n);
}
