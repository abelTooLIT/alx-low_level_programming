#include "holberton.h"
<<<<<<< HEAD

/**
 * swap_int - swap values
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
=======
/**
 * swap_int - check the code for Holberton School students.
 * @a: is a pointer
 * @b: is a pointer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
>>>>>>> 903de5e76a00e0adf8218b929c786851db4b3957
}
