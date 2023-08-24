#include "monty.h"

/**
 * _mod - computes the reminder of the division of the second top
 * element by the top element of the stack
 * @stack: pointer to lists for monty stack
 * @line_number: number of line opcode occurs on
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int mod = 0;
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		{
			tmp = (*stack)->next;
			free(*stack);
			*stack = tmp;
		}
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		{
			tmp = (*stack)->next;
			free(*stack);
			*stack = tmp;
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		mod = (*stack)->n;
		_pop(stack, line_number);
		(*stack)->n %= mod;
	}
}
