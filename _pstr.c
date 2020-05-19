#include "monty.h"
/**
 * _pstr - main funtion
 * @stack: stack of nodos
 * @numline: line number
 */
void _pstr(stack_t **stack, unsigned int numline)
{
stack_t *h;

(void) numline;

h = *stack;
while (h && h->n != 0)
{
	if (isascii(h->n))
	{
		putchar(h->n);
	}
	else
		break;
	h = h->next;
}
putchar('\n');
}
