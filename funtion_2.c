#include "monty.h"

/**
 * pop - removes element of the stack
 * @stack: stack of nodes
 * @numline: line number
 */

void pop(stack_t **stack, unsigned int numline)
{
	stack_t *pop;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", numline);
		exit(EXIT_FAILURE);
	}
	pop = *stack;
	*stack = (*stack)->next;
	free(pop);
	(*stack)->prev = NULL;

}
