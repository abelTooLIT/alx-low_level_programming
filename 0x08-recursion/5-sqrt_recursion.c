#include "holberton.h"
/**
* raiz -  function to find a square
* @n: number
* @a: counter
* Return: no zero
*/
int raiz(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	else if (a * a == n)
	{
		return (a);
	}
	else
	{
		return (raiz(n, a + 1));
	}
}
