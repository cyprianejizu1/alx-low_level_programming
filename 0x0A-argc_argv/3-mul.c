#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two number
 * @argc: arguement count
 * @argc: array of pointers to arguement string
 * Return: result of multipilication or 1
 **/

int 2main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

/* atoi helpes convert a string to an integer */
	a = atoi(agrv[1]);
	b = atoi(agrv[2]);
	result = a * b;
	printf("%d\n", result);
	
	return (0);


}
