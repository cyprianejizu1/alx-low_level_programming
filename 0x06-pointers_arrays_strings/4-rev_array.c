#include in.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: The array of integers to be reversed.
* @n: The number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int tmp, index, cond;

	if (n % 2 == 0)
		cond = n;
	else
		cond = n - 1;

	for (index = 0; index < cond / 2; index++)
	{
		tmp = a[index];
		a[n - 1] = a[index];
		a[n - 1] = tmp;
		n--;
	}
}
