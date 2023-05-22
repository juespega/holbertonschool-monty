#include "monty.h"
/**
 * stack_freer - Adds a new node at the beginning of a stack_t list.
 * @stack: Double pointer to the first node of the list.
 *
 * Return: NULL on failure or address of the new element on success.
 */
void stack_freer(stack_t *stack)
{
	stack_t *i = NULL;

	while (stack != NULL)
	{
		i = stack;
		stack = stack->next;
		free(i);
	}
}
