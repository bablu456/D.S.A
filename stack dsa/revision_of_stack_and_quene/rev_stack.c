#include <stdio.h>
#define s 5
int stack[s];
int size = s;
int top = -1;
void push(int a)
{
    if (top == size - 1)
    {
        printf("stack is full and exit ! \n");
    }
    else
    {
        stack[++top] = a;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("this stack is empty ! \n");
    }
    else
    {
        stack[top--];
    }
}
void display()
{
    if (top == -1)
    {
        printf("this stack is empty we can show you anything ! \n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}
void peek(){
    if(top!=-1){
    printf("%d ",stack[top]);
    }
}
int main()
{
    int choices, items;
    printf("1.Push\n2.Pop\n3.dsiplay\n4.peek\n5.Exit\n");
    while (1)
    {
        printf("\nenter the choices : ");
        scanf("%d", &choices);
        switch (choices)
        {
        case 1:
            printf("enter the elemnts in stack : ");
            scanf("%d", &items);
            push(items);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            return 0;
        default:
            printf("invalid options !");
        }
    }
    return 0;
}