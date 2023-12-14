#include "monty.h"

/**
 * pall- print all values in stack
 * @head: pinte to hear
 * line_number: Line number in bytecode file
 * Return: void
 */

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *node;
	node = *head;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
	(void)line_number;
}
