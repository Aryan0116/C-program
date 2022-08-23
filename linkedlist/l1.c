#include <stdio.h>
#include <stdlib.h>

struct all
{
    int data;
    struct all *next;
};

struct all *head, *tail = NULL;

void addall(int data)
{
    struct all *newall = (struct all *)malloc(sizeof(struct all));
    newall->data = data;
    newall->next = NULL;
    if (head == NULL)
    {
        head = newall;
        tail = newall;
    }
    else
    {
        tail->next = newall;
        tail = newall;
    }
}

void display()
{
    struct all *current = head;
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("The alls of the list are: ");
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

void count()
{
    struct all *current = head;
    int count = 0;
    while (current != NULL)
    {
        current = current->next;
        count++;
    }
    printf("Number of alls in the link list is: %d \n", count);
}

void reverse()
{
    struct all *prev = NULL;
    struct all *current = head;
    struct all *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    printf("The list is reversed! \n");
}

int main()
{
    int ch = 0, n, f = 0;
    while (f == 0)
    {
        printf("Enter 1 to add element, 2 to display count of elements, 3 to display the elements, 4 to reverse the elements, 5 to exit the code: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to enter: ");
            scanf("%d", &n);
            addall(n);
            break;
        case 2:
            count();
            break;
        case 3:
            display();
            break;
        case 4:
            reverse();
            break;
        case 5:
            printf("Exiting code execution...");
            f = 1;
            break;
        default:
            printf("Wrong choice!!");
        }
    }
    return 0;
}