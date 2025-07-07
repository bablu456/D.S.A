#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Ent6er the elements in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}