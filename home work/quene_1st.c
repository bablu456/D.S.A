#include <stdio.h>
#define s 5 
int quene[s];
int start = -1;
int end = -1;
int noe = 0;
int size = s;
void push(int a){
    if(noe == size){
     printf("stack is full and exit");
    }else{
        start = 0;
        noe++;
        quene[++end] = a;
    }
}
void swap(){
    int a;
    printf("Enetr the elemnt for the swap : ");
    scanf("%d",&a);
    int b;
    printf("Enetr the elemnts for the swap : ");
    scanf("%d",&b);
    if(a<b){
        int temp = quene[a];
        quene[a] = quene[b];
        quene[b] = temp;
        a++;
        b--;
    }
}
void show(){
    if(noe == 0){
        printf("the quene is empty ! ");
    }else{
        for(int i=start;i<=end;i++){
            printf("%d ",quene[i]);
        }
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    swap();
    show();

    return 0;
}