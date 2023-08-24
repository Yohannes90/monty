#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: linked lists for monty stack
 * @line_number: number of line opcode occurs on
 */
void _push(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *top;

	top = malloc(sizeof(stack_t));
	if (top == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	top->n = var_global.push_arg;
	top->next = *stack;
	top->prev = NULL;
	if (*stack != NULL)
	{
		(*stack)->prev = top;
	}
	*stack = top;
}

/**
 * _pall - prints all the values on the stack, starting from the top
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
 */
void _pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
