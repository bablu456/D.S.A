#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    int min = arr[0];
    int max = 1;
    printf("Enter the Elements in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(min>arr[i]){
            min = arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("the minimum is : %d\n",min);
    printf("the maximum is %d",max);
    return 0;
}