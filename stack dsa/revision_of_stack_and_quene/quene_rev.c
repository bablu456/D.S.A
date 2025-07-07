
#include <stdio.h>
#define s 5
int start = -1;
int end = -1;
int noe = 0;
int quene[s];
void push(int a){
    if(noe == s -1){
        printf("the quene is full ");
    }else{
        noe = noe + 1;
        start = 0;
        quene[++end] = a;
    }
}
void pop(){
    if(noe == 0){
        printf("quene is empty !");
    }else if(noe==1){
        noe = 0;
        start = -1;
        end = -1;
        quene[start];
    }else{
        noe--;
        quene[start++];
    }
}
void peek(){
    if(noe == 0){
        printf("the quene is empty ! ");
    }else{
        printf("%d",quene[end]);
    }
}
void show(){
    if(noe == 0){
        printf("this quene is empty ! ");
    }else{
        for(int i=start;i<=end;i++){
            printf("%d ",quene[i]);
        }
    }
}
int main()
{
    int choice, item;
    printf("1.enquene\n2.Dequene\n3.peek\n4.show\n5.Exit\n");
    while (1)
    {
        printf("Enetr the  choices : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enetr the elments to store : ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
           show();
            break;
        case 5:
            return 0;
        default :
        printf("please enter corrct option ! ");
        }
    }
    return 0;
}