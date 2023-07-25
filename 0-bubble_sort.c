#include "sort.h"
/**
 * bubble_sort - is a bubblesort function
 * @array: is the sorted array
 * @size: size of array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t len = size;
	size_t temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		print_array(array, size);
	}
}
