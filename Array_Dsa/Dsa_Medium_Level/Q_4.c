#include <stdio.h>
int main(){
    int size;
    printf("Enter the Size of The Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Elemnts in The Array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    int max_sum = 0;
    int k = 3;
    for(int i = 0;i<k;i++){
        sum = sum + arr[i];
    }
    printf("[");
    for(int i=k-1;i<k+k-1;i++){
        printf("%d,",arr[i]);
        max_sum = max_sum + arr[i];
    }
    if(sum>max_sum){
        max_sum = sum;
    }
    printf("]\nMaximum sum = %d",max_sum);
    return 0;
}