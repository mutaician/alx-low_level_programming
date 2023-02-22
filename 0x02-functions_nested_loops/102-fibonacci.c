#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int t1 = 1, t2 = 2, nt;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld, ", t1);
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
	}
	return (0);
}
