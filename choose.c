#include "monty.h"
/**
 * get_funtion - elegir función
 * @string: string
 * @stack: stack of nodos
 * @numline: line number
 * Return: void
 */
void get_funtion(char *string, stack_t **stack, unsigned int numline)
{

	unsigned int i;

	instruction_t opc[] = {
		{"pall", pall},
		{"pint", pint},
		{"nop", _nop},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr}
	};
for (i = 0; i < 13; i++)
{
	if (strcmp(opc[i].opcode, string) == 0)
	{
		opc[i].f(stack, numline);
		return;
	}
}
fprintf(stderr, "L%u: unknown instruction %s\n", numline, string);
exit(EXIT_FAILURE);
}
