#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @stack: stack pointer to linked list stack
 * @line_number: number of line opcode occurs on
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int tmp;

	if (current == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = current->n;
	current->n = current->next->n;
	current->next->n = tmp;
}