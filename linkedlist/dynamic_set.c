#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, choice, num, pos;
    int *arr;
    printf("\n Enter the number of elements ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf(" \n Memory Allocation Failed");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the value %d of the array: ", i);
        scanf("%d", &arr[i]);
    }
    while (n > 0)
    {
        printf("\n 1.DISPLAY ARRAY \n 2.INSERT KAR ARRAY \n 3.DELETE ARRAY \n Enter your choice =");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\n The array contains \n");
            for (i = 0; i < n; i++)
                printf("\n arr[%d] = %d", i, arr[i]);
        }
        break;
        case 2:
        {
            printf("\n Enter the number to be inserted : ");
            scanf("%d", &num);
            printf("\n Enter the position at which the number has to be added :");
            scanf("%d", &pos);
            for (i = n - 1; i >= pos; i--)
                arr[i + 1] = arr[i];
            arr[pos] = num;
            n = n + 1;
            printf("\n The array after insertion of %d is : ", num);
            for (i = 0; i < n; i++)
                printf("\n arr[%d] = %d", i, arr[i]);
        }
        break;

        case 3:
        {
            printf("\nEnter the position from which the number has to be deleted : ");
            scanf("%d", &pos);
            for (i = pos; i < n - 1; i++)
                arr[i] = arr[i + 1];
            n--;
            if(n>0){
            printf("\n The array after deletion is : ");
            for (i = 0; i < n; i++)
                printf("\n arr[%d] = %d", i, arr[i]);
            }
        }
        break;
        default:
            printf("Error! operator is not correct");
            break;
        }
        if(n<=0)
            printf(" \n THE ARRAY IS TERMINATED");
    }
}