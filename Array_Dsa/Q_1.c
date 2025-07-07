#include <stdio.h>
int main(){
    int max = 1;
    int size;
    printf("Enter the Size of The Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elemnts in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("the max elemnts in this array is : %d",max);

    return 0;
}