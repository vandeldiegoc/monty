#include "monty.h"

/**
 * push_funtion - insert nodo
 * @nr: value of nodo
 * @stack: stack of nodos
 * @numline: line number
 */
void push_funtion(char *nr, stack_t **stack, unsigned int numline)
{
	stack_t *new = NULL;
	int number;
	(void)numline;
	if (str_is_num(nr) != 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", numline);
		exit(EXIT_FAILURE);
	}
number = atoi(nr);
new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	new->n = number;
	if (*stack == NULL)
	{
		(*stack) = new;
	}
	else
	{
		(*stack)->prev = new;
		new->next = *stack;
		(*stack) = new;
	}
}

/**
 * pall - main funtion
 * @h: stack of nodos
 * @numline: line number
 */
void pall(stack_t **h, unsigned int numline)
{
while (*h != NULL)
{
printf("%d\n", (*h)->n);
(void)numline;
(*h) = (*h)->next;
}

}

/**
 * free_stack - frees a list_t list
 * @head: pointer of head
 * Return: void
 */
void free_stack(stack_t **head)
{
	stack_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}



/**
 * str_is_num - value id number
 * @str: value
 * Return: int
 */
int str_is_num(char *str)
{
	int i = 0;
	int counter = 0;

	/*checking negative sign*/
	if (str[0] == '-')
		i = 1;

	while (str[i] != '\0')
	{
		if (isdigit(str[i]) == 0)
			counter++;
		i++;
	}
	return (counter);
}
