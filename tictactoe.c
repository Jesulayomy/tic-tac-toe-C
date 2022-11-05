#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void board(char, char, char, char, char, char, char, char, char);

/**
 * main - tictactoe game
 *
 * Return: 0 at successful exit
 */
int main()
{
	char a1, a2, a3, b1, b2, b3, c1, c2, c3, xo;
	int i, c; /* c is used to collect the cell to play in, i counts the turns */

	a1 = a2 = a3 = b1 = b2 = b3 = c1 = c2 = c3 = ' ';
	
		for (i = 1; i < 10; i ++)
		{
		if (i % 2 == 0)
			xo = 'x';
		else
			xo = 'o';

		printf("Enter your location (1-9)\n");
		scanf("%d", &c);

		if (c == 1) { a1 = xo;} else if (c == 2) { a2 = xo;}
		else if (c == 3) { a3 = xo;} else if (c == 4) { b1 = xo;}
		else if (c == 5) { b2 = xo;} else if (c == 6) { b3 = xo;}
		else if (c == 7) { c1 = xo;} else if (c == 8) { c2 = xo;}
		else if (c == 9) { c3 = xo;} else { i--;}

		board(a1, a2, a3, b1, b2, b3, c1, c2, c3);
		}

	return(0);
}

void board(char a1, char a2, char a3, char b1, char b2, char b3, char c1, char c2, char c3)
{
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", a1, a2, a3);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", b1, b2, b3);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", c1, c2, c3);
	printf("     |     |     \n");
}
