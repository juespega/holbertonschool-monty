#include "monty.h"
/**
 * get_opcode - Adds a new node at the beginning of a stack_t list.
 * @instruction: Data value for the new node.
 * @stack: Double pointer to the first node of the list.
 * @line_number: Data value for the new node.
 *
 * Return: NULL on failure or address of the new element on success.
 */
void (*get_opcode(char *instruction))(stack_t **stack, unsigned int line_number)
{
	unsigned int i;
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"nop", nop},
		{NULL, NULL}
	};
	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, instruction) == 0)
			return (instructions[i].f);
	}
	return (NULL);
}
