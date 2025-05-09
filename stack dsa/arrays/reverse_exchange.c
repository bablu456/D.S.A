#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elemnts in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the first index for reverse : ");
    int a ;
    scanf("%d",&a);
    int b ;
    printf("enter the second for reverse : ");
    scanf("%d",&b);
    if(a<b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}