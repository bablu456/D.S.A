#include <stdio.h>
int main(){
    int size;
    printf("Enter the Size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Search Elemnts : ");
    int search;
    scanf("%d",&search);
    printf("Elemnts %d found at : ",search);
    for(int i=0;i<size;i++){
        if(search == arr[i]){
        printf("%d ",i);
        }
    }
    return 0;
}