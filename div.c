#include "monty.h"

/**
 * _div - divides the second top element by the top element of the stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int div = 0;
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		while (*stack)
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
		while (*stack)
		{
			tmp = (*stack)->next;
			free(*stack);
			*stack = tmp;
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		div = (*stack)->n;
		_pop(stack, line_number);
		(*stack)->n /= div;
	}
}
