#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    int min = arr[0];
    printf("Enter the Elements in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("the minimum is : %d",min);
    return 0;
}