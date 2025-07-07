#include <stdio.h>
int main(){
    int size;
    printf("Enter the Size of The Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elemnts in the array : ");
    int sum = 0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("the max elemnts in this array is : %d",sum);

    return 0;
}