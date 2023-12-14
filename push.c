#include "monty.h"

/**
 * push- Push value to stac
 * @head: pointer to main stack
 * @line_number: Line in bytecode file
 * Return: void
 */

void push(stack_t **head, unsigned int line_number)
{
	stack_t *node;

	if (global.arg == NULL || !_isdigit(global.arg))
	{
		fflush(stdout);
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(*head);
		fclose(global.file);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		fflush(stdout);
		fprintf(stderr, "Error : malloc failed\n");
		free_stack(*head);
		fclose(global.file);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	node->n = atoi(global.arg);

	if (*head == NULL)
	{
		(*head) = node;
		node->prev = NULL;
		node->next = NULL;
	}
	else
	{
		(*head)->prev = node;
		node->next = *head;
		(*head) = node;
	}
}

/**
 * _isdigit-checks if its digit
 * @x: charecter
 *
 * Return: 1 if true 0 if false
 */

int _isdigit(char *x)
{
	if (x == NULL || *x == '\0')
		return (0);

	if (*x == '-' || *x == '+')
		x++;

	while(*x != '\0')
	{
		if (*x < '0' || *x > '9')
			return (0);

		x++;
	}
	return (1);
}
