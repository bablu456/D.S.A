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
    int store;
    for(int i=0;i<size;i++){
        if(search == arr[i]){
            store = i;
        }
    }
    if(store){
        printf("Elemnts %d found at %d index ",search,store);
    }else{
        printf("The data not found !!!");
    }

    return 0;
}