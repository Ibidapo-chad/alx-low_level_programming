#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search2 - searches for value in a sorted array of integers using the
 *                 Binary Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @low: lower boundary of array subset to search in
 * @high: upper boundary of array subset to search in
 *
 * Return: index where value is located, or -1
 */
int binary_search2(int *array, int value, size_t low, size_t high)
{
	size_t left = low, right = high, idx = 0;
	int mid = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			printf("%d", array[idx]);
			if (idx != right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
