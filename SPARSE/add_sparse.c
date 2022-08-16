#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row1, col1,row2,col2, i, j, p ,o , a1[10][10],a2[10][10], count1 = 0, count2 = 0;
    printf("Enter row\n");
    scanf("%d", &row1);
    printf("Enter Column\n");
    scanf("%d", &col1);
    printf("Enter Element of Matrix1\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }
    printf("Elements are in Matrix 1 :\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d\t", a1[i][j]);
        }
        printf("\n");
    }
    printf("Enter row\n");
    scanf("%d", &row2);
    printf("Enter Column\n");
    scanf("%d", &col2);
    printf("Enter Element of Matrix1\n");
    for (p = 0; p < row2; p++)
    {
        for (o = 0; o < col2; o++)
        {
            scanf("%d", &a2[p][o]);
        }
    }
    printf("Elements are in Matrix 2 :\n");
    for (p = 0; p < row2; p++)
    {
        for (o = 0; o < col2; o++)
        {
            printf("%d\t", a2[p][o]);
        }
        printf("\n");
    }
    int size1 = 0;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            if (a1[i][j] != 0)
                size1++;

    int short1[3][size1];

    int k = 0;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            if (a1[i][j] != 0)
            {
                short1[0][k] = i;
                short1[1][k] = j;
                short1[2][k] = a1[i][j];
                k++;
            }
        printf("Shortcut Form of Sparse Matrix 1 \n");

	for (int i=0; i<3; i++)
	{
        if(i==0)
        {
            printf("ROW:    ");
        }
        else if (i==1)
        {
            printf("COL:    ");
        }
        else{
            printf("VALUE:  ");
        }
		for (int j=0; j<size1; j++)
			printf("%d ", short1[i][j]);

		printf("\n");
	}
    int size2 = 0;
    for (int p = 0; p < row2; p++)
        for (int o = 0; o < col2; o++)
            if (a2[p][o] != 0)
                size2++;

    int short2[3][size2];

    int z = 0;
    for (int p = 0; p < row2; p++)
        for (int o = 0; o < col2; o++)
            if (a2[p][o] != 0)
            {
                short2[0][z] = p;
                short2[1][z] = o;
                short2[2][z] = a2[p][o];
                z++;
            }
    printf("Shortcut Form of Sparse Matrix 2 \n");

	for (int i=0; i<3; i++)
	{
        if(i==0)
        {
            printf("ROW:    ");
        }
        else if (i==1)
        {
            printf("COL:    ");
        }
        else{
            printf("VALUE:  ");
        }
		for (int f=0; f<size2; f++)
			printf("%d ", short2[i][f]);

		printf("\n");
	}
    int size3 = 0;
        for (int j = 0; j <= k; j++)
            if (short1[3][j] != 0 || short2[3][j] != 0)
                size3++;

    int add[3][size3];
    int t = 0;
    for (int p = 0; p < 3; p++)
        for (int o = 0; o < k; o++)
            if(short1[p]==short2[p] && short1[o]==short2[o])
            {
                add[0][t] = p;
                add[1][t] = o;
                add[2][t] = short1[2][o]+short2[2][o];
                t++;
            }

    //printf("%d",k);
    //printf("%d",z);
    //printf("%d",size3);

    
    printf("Shortcut Form of Sparse Matrix add \n");

	for (int i=0; i<3; i++)
	{
        if(i==0)
        {
            printf("ROW:    ");
        }
        else if (i==1)
        {
            printf("COL:    ");
        }
        else{
            printf("VALUE:  ");
        }
		for (int f=0; f<=k; f++)
			printf("%d ", add[i][f]);

		printf("\n");
	}

}