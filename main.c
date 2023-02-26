#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main (void)
{
	/* Part - Working with Pointers 
	 *
	 * Return value of a non initialized pointer gives an error !
	 *
	 *
	 *
	 * */

	int a = 10;
	int *p = &a;

	printf("%p : is the memory address of var a of type integer. \n", p);
	printf("%p : is the adress after an incrementation by 2.", p + 2);
} 
