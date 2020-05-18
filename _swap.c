#include "monty.h"
/**
 * swap - swap value nodes
 * @stack: stack of nodes
 * @numline: line number
 *
 */
void swap(stack_t **stack, unsigned int numline)
{
stack_t *temp;
int value;
temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", numline);
		exit(EXIT_FAILURE);
	}
value = temp->n;
temp->n = temp->next->n;
temp->next->n = value;

}
