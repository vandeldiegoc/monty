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

	instruction_t opcode[] = {
		{"pall", pall}
	};

i = 0;

	while (opcode[i].opcode != NULL)
	{

		if (strcmp(opcode[i].opcode, string) == 0)
		{
			opcode[i].f(stack, numline);
			return;
		}
		else
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", numline, string);
			exit(EXIT_FAILURE);
		}
		i++;

}

}
