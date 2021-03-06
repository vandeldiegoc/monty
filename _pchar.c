#include "monty.h"
#include <ctype.h>

/**
 * _pchar - print character from top of stack
 * @h: double pointer to top of stack
 * @numline: line number of current operation
 *
 * Return: void
 */
void _pchar(stack_t **h, unsigned int numline)
{
int number;
if (*h != NULL || *h != NULL)
{
number = (*h)->n;
if (!isascii(number))
	{
fprintf(stderr, "L%u: can't pchar, value out of range\n", numline);
exit(EXIT_FAILURE);
	}
printf("%c\n", number);
}
else
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", numline);
exit(EXIT_FAILURE);
}
}
