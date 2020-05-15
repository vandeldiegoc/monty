#include "monty.h"

/**
 * pint - main funtion
 * @h: stack of nodos
 * @numline: line number
 */
void pint(stack_t **h, unsigned int numline)
{
if (h != NULL || *h != NULL)
printf("%d\n", (*h)->n);

else
{
fprintf(stderr, "L%d: can't pint, stack empty\n", numline);
exit(EXIT_FAILURE);
}
}
