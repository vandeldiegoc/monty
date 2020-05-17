#include "monty.h"
/**
 * main - main funtion
 * @argc: number of arguments
 * @argv: argumens
 * Return: int
 */
int main(int argc, char *argv[])
{
stack_t *stack = NULL;
unsigned int numline = 0;
char *line = NULL, *tokens = NULL;
FILE *opfile;
size_t len;
char *delimit = " \t\r\n";
if (argc != 2)
{
	printf("USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
opfile = fopen(argv[1], "r");
if (opfile == NULL)
{
	printf("Error: Can't open file %s", argv[1]);
	exit(EXIT_FAILURE);
}
while (getline(&line, &len, opfile) != -1)
{
	numline++;
	tokens = strtok(line, delimit);
	if (tokens == NULL || tokens[0] == '#')
		continue;

	if (strcmp(tokens, "push") == 0)
	{
	tokens = strtok(NULL, delimit);
		push_funtion(tokens, &stack, numline);
	}
	else
		get_funtion(tokens, &stack, numline);
	tokens = strtok(NULL, delimit);
}
free_stack(&stack);
fclose(opfile);
free(line);
return (0);
}
