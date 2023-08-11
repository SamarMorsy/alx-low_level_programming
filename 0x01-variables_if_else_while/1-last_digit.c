/**
 * main - Entry point
 *
 * descreption: find the latest digit of a givin number
 *
 * Return: always 0 (success)
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	int lastDigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigi = n % 10;
	if (lastDigi > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigi);
	else if (lastDigi == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigi);
	else if (lastDigi < 6 && !(lastDigi == 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigi);
	return (0);
}
