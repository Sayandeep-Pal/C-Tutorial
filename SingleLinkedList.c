#include <stdio.h>
#include <stdlib.h>

typedef struct singleLinkedList
{
    int data;
    struct singleLinkedList *next;
} N;

N *start = NULL, *end = NULL, *ptr;
int count=0;

void Search()
{
    if(start==NULL)
    {
        printf("Linked List is empty.");
        return;
    }
    int num;
    printf("Enter the data to search : ");
    scanf("%d",&num);
    N *temp = start;

    while(temp!=NULL)
    {
        
        if(num==temp->data)
        {
            printf("Data found.");
            break;
        }
        temp=temp->next;
    }
}
void EnterStart()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter a value : ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    count++;
    if (start == NULL)
        start = end = ptr;
    else
    {
        ptr->next = start;
        start = ptr;
    }
}

void EnterEnd()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter a value : ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    count++;

    if (end == NULL)
    {
        start = end = ptr;
    }
    else
    {
        end->next = ptr;
        end = ptr;
    }
}

void EnterInBetween()
{
    if (start == NULL)
        printf("Linked List is not created.");

    else{
        int pos,c=1;
        N *temp=start;
        printf("Enter the pos to enter the number : ");
        scanf("%d",&pos);

        if(pos<count)
        {
            ptr = (N *)malloc(sizeof(N));
            printf("Enter a value : ");
            scanf("%d", &ptr->data);
            ptr->next = NULL;
            while (c<pos-1)
            {
                temp=temp->next;
                c++;
            }
            ptr->next=temp->next->next;
            temp->next=ptr;

            
        }
        else
            printf("Position does not exist.");
    }
}

void deleteStart()
{
    if(start==NULL)
    {
        printf("Linked list does not exist.");
        return;
    }
    N *temp1=start;
    start=start->next;
    free(temp1);
    count--;
}
void deleteEnd()
{
    if(start==NULL)
    {
        printf("Linked list does not exist.");
        return;
    }
    N *temp1=start;
    while(temp1->next->next!=NULL)
    {
        temp1=temp1->next;
    }
    free(end);
    end = temp1;
    end->next = NULL;
    count--;

}

void deleteInBetween()
{
    if(start==NULL)
    {
        printf("Linked list does not exist.");
        return;
    }
    int pos, c=1;
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(pos<count)
    {
        N *tmp=start,*tmp1;
        while(c<pos-1)
        {
            tmp = tmp->next;
            c++;
        }
        tmp1=tmp->next;
        tmp->next=tmp1->next;
        free(tmp1);
        count--;
        printf("Node Deleted.");
    }
    else{
        printf("position does not exist.");
    }

}

void Display()
{
    if (start == NULL)
        printf("Linked List is not created.");

    else
    {
        N *temp;
        for (temp = start; temp != NULL; temp = temp->next)
        {
            printf("%d->", temp->data);
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nMENU\n");
        printf("\n1.InsertStart\n2.InsertEnd\n3. InsertInBetween\n4. Search\n5. Display\n6. DeleteStart\n7. DeleteEnd\n8. DeleteInBetween\n0. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            EnterStart();
            break;

        case 2:
            EnterEnd();
            break;

        case 3:
            EnterInBetween();
            break;

        case 4:
            Search();
            break;

        case 5:
            Display();
            break;

        case 6:
            deleteStart();
            break;

        case 7:
            deleteEnd();
            break;

        case 8:
            deleteInBetween();
            break;

        case 0:
            return 0;
        default:
            break;
        }
    }
}


