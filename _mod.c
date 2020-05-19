#include "monty.h"

/**
* _mod - divides the second top element of the stack by the top
* @stack: db-pointer to a stack structure.
* @numline: number of the line.
* Return: void.
 */
void _mod(stack_t **stack, unsigned int numline)
{
unsigned int x;
if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%d: can't mod, stack too short\n", numline);
	exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0 || ((*stack)->n) > (*stack)->next->n)
	{
	fprintf(stderr, "L%d: division by zero\n", numline);
	exit(EXIT_FAILURE);
	}
x = (*stack)->n;
pop(stack, numline);
(*stack)->n %= x;
}
