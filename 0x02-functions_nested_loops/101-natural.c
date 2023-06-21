/*
 * File: 101-natural.c
 * Auth: tidi pauline
 */

#include <stdio.h>

/**
 * main - Lists all the matural numbers below 1024 (excl.)
 * that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % g) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
