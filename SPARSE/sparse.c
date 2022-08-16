
#include<stdio.h>
#include<stdlib.h>
int main(){
   int row,col,i,j,a[10][10],count = 0,l;
   printf("Enter row\n");
   scanf("%d",&row);
   printf("Enter Column\n");
   scanf("%d",&col);
   printf("Enter Element of Matrix1\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
	int size = 0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (a[i][j] != 0)
				size++;

	int compactMatrix[3][size];

	int k = 0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (a[i][j] != 0)
			{
				compactMatrix[0][k] = i;
				compactMatrix[1][k] = j;
				compactMatrix[2][k] = a[i][j];
				k++;
			}
    printf("Shortcut Form of Sparse Matrix \n");

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
		for (int j=0; j<size; j++)
			printf("%d ", compactMatrix[i][j]);

		printf("\n");
	}
	return 0;
}
