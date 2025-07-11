#include <stddef.h>

/**
 * int_index - Searches for an integer
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: Index of the first element for which cmp does not return 0
 *         -1 if no match is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

