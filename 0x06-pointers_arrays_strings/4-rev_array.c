#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: The array of integers to be reversed.
* @n: The number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int i, temp, cond;

	if (n % 2 == 0)
		cond = n;
	else
		cond = n - 1;
	for (i = 0; i < cond / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
