#include "monty.h"
/**
 * lines_reader - Adds a new node at the beginning of a stack_t list.
 * @file: Double pointer to the first node of the list.
 * @line_number: Data value for the new node.
 *
 * Return: NULL on failure or address of the new element on success.
 */
char *lines_reader(char *file, unsigned int line_number)
{
	FILE *file_monty;
	char *line = NULL;
	size_t lenght_of_line = 0;
	ssize_t number_of_characters_read = 0;
	unsigned int i;

	file_monty = fopen(file, "r");
	if (file_monty == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < line_number; i++)
	{
		number_of_characters_read = getline(&line, &lenght_of_line, file_monty);
		if (number_of_characters_read == -1)
		{
			break;
		}
		if (i == line_number - 1)
		{
			fclose(file_monty);
			return (line);
		}
	}
	fclose(file_monty);
	free(line);
	return (NULL);
}
