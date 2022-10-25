#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int r = 3, c = 4;
 
    int* ptr =(int *)malloc((r * c) * sizeof(int));
    for (int i = 0; i < r * c; i++)
        scanf(" enter the element = %d", &ptr[i]);
 
    /* Accessing the array values as if it was a 2D array */
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
            printf("%d ", ptr[i * c + j]);
        printf("\n");
    }
 
    free(ptr);
 
    return 0;
}