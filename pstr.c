#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
 */
void _pstr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *tmp = *stack;
	int c = 0;

	while (tmp)
	{
		c = tmp->n;
		if (c == 0 || isalpha(c) == 0)
			break;
		putchar(c);
		tmp = tmp->next;
	}
	putchar('\n');
}
