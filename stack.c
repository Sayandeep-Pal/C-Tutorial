#include<stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push()
{
    int n = 0;
    printf("Enter a number to push in the stack: ");
    scanf("%d", &n);
    if(top < MAX - 1)
    {
        top++;
        stack[top] = n;
    }
    else 
    {
        printf("Stack Overflow.\n");
    }
}

void pop()
{
    int item = 0;
    if(top >= 0)
    {
        item = stack[top];
        top--;
        printf("Popped element: %d\n", item);
    }
    else 
    {
        printf("Stack Underflow.\n");
    }
}

void display()
{
    int i = 0;
    if(top >= 0)
    {
        printf("Stack elements are: ");
        for(i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    else 
    {
        printf("Stack is empty.\n");
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\nMenu\n");
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("..........................................\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: 
                push();
                display();
                break;
            case 2: 
                pop();
                display();
                break;
            case 3: 
                display();
                break;
            case 4: 
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
