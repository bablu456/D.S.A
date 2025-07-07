#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the arry : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                // break;
            }
        }
    }
    printf("The total uniqe number is : %d",size-count);
    return 0;
}