#include "main.h"
/**
 * print_chessboard - print a chessboard.
 *
 * @a: pointer to variable
 *
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;


	for (i = 0; i < 8; i++)
		_putchar(a[i++]);
}
