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
    int count = 0;
    for(int i=0;i<size;i++){
        if(search == arr[i]){
            count++;
        }
    }
   printf("Elements  %d found %d",search,count);

    return 0;
}