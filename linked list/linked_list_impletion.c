#include <stdio.h>
#include <stdlib.h>
// define the node structure

typedef struct node
{
    int data;
    struct node *next;
} node;
node *createnode(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    if (!newnode)
    {
        printf("memorry error \n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void traverse(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("null");
}
int main()
{
    node *head = createnode(10);
    head->next = createnode(20);
    head->next->next = createnode(30);
    printf("linked list\n");
    traverse(head);
}
