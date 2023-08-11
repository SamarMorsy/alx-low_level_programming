/**
 * main -entry point
 *
 * Descreption: using write to print
 *
 * return 1 (not success)
*/
#include<stdio.h>
#include<unistd.h>
int main(void)
{
	char myC[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, myCr, 59);
	return (1);
}
