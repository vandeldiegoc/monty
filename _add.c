#include "monty.h"
/**
 * add - add value nodes
 * @stack: stack of nodes
 * @numline: line number
 *
 */
void add(stack_t **stack, unsigned int numline)
{
stack_t *temp;
unsigned int value;
temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", numline);
		exit(EXIT_FAILURE);
	}
value = ((*stack)->n) + ((*stack)->next->n);
(*stack)->next->n = value;
pop(stack, numline);
}
