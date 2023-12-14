#include "monty.h"

/**
 * pint-  prints the value at the top of the stack
 * @head: head of stack
 * @line_number: number line
 */

void pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fflush(stdout);
		fprintf(stderr, "L%d: cannot pint, stack empty\n", line_number);
		fclose(global.file);
		free(global.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
