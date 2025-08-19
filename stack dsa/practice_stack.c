#include <stdio.h>
#define s 5
int stack[s];
int top = -1;
int size = 5;
void push(int a){
    if(top == s-1){
        printf("Stack is Overflow ! ");
    }else{
        stack[++top] = a;
    }
}
void pop(){
    if(top == -1){
        printf("Stack is underflow !! ");
    }else{
        stack[top--];
    }
}
void display(){
    for(int i=0;i<=top;i++){
        printf(" %d",stack[i]);
    }
    printf("\n");
}
int main(){
    int choices , item ;
    push(1);
    display();
    pop();
    pop();
    // display();
    return 0;
}