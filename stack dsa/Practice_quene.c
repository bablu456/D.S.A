#include <stdio.h>
#define s 5
int quene[5];
int start = -1;
int end = -1;
int noe = 0;
 void push(int a){
    if(noe == s){
        printf("The quene is full ");
    }else{
        noe++;
        quene[++end] = a;
        start = 0;
    }
 }
 void pop(){
    if(noe == -1){
        printf("the quene is empty !! ");
    }else{
        quene[start++];
        noe--;
    }
 }
 void display(){
    if(noe == 0){
        printf("the quene is empty !! ");
    }else{
        for(int i=0;i<=end;i++){
            printf("%d",quene[i]);
        }
    }
 }
 void peek(){
    if(noe != -1){
        printf("%d",quene[end]);
    }
 }
 int main(){
    push(10);
    display();
    return 0;
 }