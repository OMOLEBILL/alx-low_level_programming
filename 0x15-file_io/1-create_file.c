#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file 
 * @text_content: sting to write 
 * Return: If the function fails - -1.
 *         else -1
 **/
int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1 )
		return (-1);

	close(op);
	
	return (1);
}
