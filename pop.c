#include "monty.h"

/**
 * _pop -  removes the top element of the stack
 *@stack: pointer to first node
 *@line_number: number of line opcode occurs on
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *nodo = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = nodo->next;
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(nodo);
}
