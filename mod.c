#include "monty.h"

/**
 * f_mod - Computes the remainder of dividing the second top element
 *         of the stack by the top element.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the input file.
 *
 * Return: void.
 */
void f_mod(stack_t **head, unsigned int line_number)
{
	stack_t *original_head;
	unsigned int len = 0, temp;
