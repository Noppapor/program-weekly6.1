#include"stdio.h"
int main() {
	int x, i, j;
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= 2 * x + 1; j++)
		{
			if (j <= x - i)
			{
				printf(" ");
			}
			if (j > x - i && j <= x + (i - 1))
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
