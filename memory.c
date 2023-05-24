#include "shell.h"

/**
 * bfree - frees pointer and voids address
 * @ptr: address of pointer to free
 *
 * Return: Return 1 if freed, and 0 if otherwise
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
