#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void board(char);

/**
 * main - tictactoe game
 *
 * Return: 0 at successful exit
 */
int main()
{
	char c = 'x';
	board(c);

	return(0);
}

void board(char c)
{
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", c, c, c);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", c, c, c);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", c, c, c);
	printf("     |     |     \n");
}
