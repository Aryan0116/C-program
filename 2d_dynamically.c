#include <stdio.h>
int main()
{
	int i, j, r, c;
	printf("ENTER THE NUMBER OF ROWS = ");
	scanf("%d", &r);
	printf("ENTER THE NUMBER OF COLOUMS = ");
	scanf("%d", &c);
	printf("\n Enter the elements of the matrix ");
	int mat[r][c];
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n The elements of the matrix are ");
	for (i = 0; i < r; i++)
	{
		printf("\n");
		for (j = 0; j < c; j++)
			printf("\t %d", mat[i][j]);
	}
	return 0;
}