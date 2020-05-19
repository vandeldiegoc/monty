#include "monty.h"
/**
 * mul - add value nodes
 * @stack: stack of nodes
 * @numline: line number
 *
 */
void mul(stack_t **stack, unsigned int numline)
{
unsigned int value;

	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%d: can't mul, stack too short\n", numline);
	exit(EXIT_FAILURE);
	}
value = ((*stack)->n) * ((*stack)->next->n);
(*stack)->next->n = value;
pop(stack, numline);
}
