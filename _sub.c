#include "monty.h"
/**
 * sub - sub value nodes
 * @stack: stack of nodes
 * @numline: line number
 *
 */
void sub(stack_t **stack, unsigned int numline)
{
unsigned int value;

	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%d: can't add, stack too short\n", numline);
	exit(EXIT_FAILURE);
	}
value = ((*stack)->next->n) - ((*stack)->n);
(*stack)->next->n = value;
pop(stack, numline);
}
