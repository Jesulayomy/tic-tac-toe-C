#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void board(char, char, char, char, char, char, char, char, char);
int check(char, char, char, char, char, char, char, char, char);

/**
 * main - tictactoe game
 *
 * Return: 0 at successful exit
 */
int main(void)
{
	char a1, a2, a3, b1, b2, b3, c1, c2, c3, xo;
	int i, c, w, j, t; /* c is used to collect the cell to play in, i counts the turns */
	int cell[9];

	a1 = a2 = a3 = b1 = b2 = b3 = c1 = c2 = c3 = ' ';
	
	for (i = 1; i < 10; i ++)
	{
		if (i % 2 == 0)
			xo = 'x';
		else
			xo = 'o';

		printf("Enter your location (1-9)\n");
		scanf("%d", &c);
		
		for (j = 0; j < i; j++)
		{
			if (cell[j] == c)
			{
				t = 0;
				printf("Cell occupied\n");
				i--;
			}

		}

		if (t == 0)
		{
			t = 1;
			continue;
		}
		
		cell[i] = c;

		if (c == 1) { a1 = xo;} else if (c == 2) { a2 = xo;}
		else if (c == 3) { a3 = xo;} else if (c == 4) { b1 = xo;}
		else if (c == 5) { b2 = xo;} else if (c == 6) { b3 = xo;}
		else if (c == 7) { c1 = xo;} else if (c == 8) { c2 = xo;}
		else if (c == 9) { c3 = xo;} else { i--;}

		board(a1, a2, a3, b1, b2, b3, c1, c2, c3);
		w = check(a1, a2, a3, b1, b2, b3, c1, c2, c3);
		if (w == 1)
		{
			printf("Player %c wins\n", xo);
			return (0);
		}
		else
		{
			continue;
		}
	}

	return(0);
}

int check(char a1, char a2, char a3, char b1, char b2, char b3, char c1, char c2, char c3)
{
	if (a1 != ' ' && a2 != ' ' && a1 == a3 && a1 == a2)
		return (1);
	else if (a1 != ' ' && b2 != ' ' && a1 == b2 && a1 == c3)
		return (1);
	else if (a1 != ' ' && b1 != ' ' && a1 == b1 && a1 == c1)
		return (1);
	else if (a2 != ' ' && b2 != ' ' && a2 == b2 && a2 == c2)
		return (1);
	else if (a3 != ' ' && b3  != ' ' && a3 == b3 && a3 == c3)
		return (1);
	else if (a3 != ' ' && b2  != ' ' && a3 == b2 && a3 == c1)
		return (1);
	else if (b1 != ' ' && b2  != ' ' && b1 == b2 && b1 == b3)
		return (1);
	else if (c1 != ' ' && c2  != ' ' && c1 == c2 && c1 == c3)
		return (1);
	else
		return (0);

	return (0);
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
