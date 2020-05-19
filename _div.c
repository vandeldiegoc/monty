#include "monty.h"
/**
 * _div - sub value nodes
 * @stack: stack of nodes
 * @numline: line number
 *
 */
void _div(stack_t **stack, unsigned int numline)
{
unsigned int value;

	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%d: can't div, stack too short\n", numline);
	exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0 || ((*stack)->n) > (*stack)->next->n)
	{
	fprintf(stderr, "L%d: division by zero\n", numline);
	exit(EXIT_FAILURE);
	}
value =  (*stack)->next->n / ((*stack)->n);
(*stack)->next->n = value;
pop(stack, numline);
}
