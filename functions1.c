#include "monty.h"
/**
 * an_alpha - Adds a new node at the beginning of a stack_t list.
 * @str: Double pointer to the first node of the list.
 *
 * Return: NULL on failure or address of the new element on success.
 */
int an_alpha(const char *str)
{
	size_t i;

	if (*str == '-')
		str++;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	return (0);
}
/**
 * add - Adds a new node at the beginning of a stack_t list.
 * @stack: Double pointer to the first node of the list.
 * @line_number: Data value for the new node.
 *
 * Return: NULL on failure or address of the new element on success.
 */
void add(stack_t **stack, unsigned int line_number)
{
int ans;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
{
	dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_number);
	free(line);
	stack_freer(*stack);
	exit(EXIT_FAILURE);
}
ans = (*stack)->next->n + (*stack)->n;
(*stack)->next->n = ans;
pop(stack, line_number);
}
/**
 * nop - Adds a new node at the beginning of a stack_t list.
 * @stack: Double pointer to the first node of the list.
 * @line_number: Data value for the new node.
 *
 * Return: NULL on failure or address of the new element on success.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack, (void)line_number;
}
