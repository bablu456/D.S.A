#include <stdio.h>
int main(){
    int size;
    printf("Enter the sie of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Elements in the Array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Taget number : ");
    int target;
    scanf("%d",&target);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                printf("[%d,",i);
                printf("%d]\n",j);
                printf("[%d,",arr[i]);
                printf("%d]",arr[j]);
            }
        }
    }
    return 0;
}