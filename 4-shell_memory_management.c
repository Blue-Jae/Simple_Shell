#include "shell.h"

/**
 * _realloc - function to reallocate a memory to buffer.
 * @ptr : pointer to reallocate the memory to.
 * @old : The old memory size
 * @new : The new memory size
 * Return: the new memory reallocated
 */

void *_realloc(void *ptr, int old, int new)
{
	void *tmp;
	int i, min;

	if (!ptr)
		return (malloc(new));
	else if (new == old)
		return (ptr);
	else if (new == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		min = (new < old) ? new : old;
		tmp = malloc(new);
		if (tmp)
		{
			for (i = 0; i < min; i++)
				*((char *)tmp + i) = *((char *)ptr + i);
			free(ptr);
			return (tmp);
		}
		else
			return (NULL);
	}
}
