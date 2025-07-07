#include <stdio.h>
int main(){
    int size;
    printf("Enter the Size of The Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Elments in The Array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            printf("Duplicate Elemnts : %d\n",arr[i]);
        }
        }
    }
    return 0;
}