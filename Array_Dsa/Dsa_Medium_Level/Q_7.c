#include <stdio.h>
int binarySearch(int arr[],int t,int e){
int mid = 0;
int start = 0;
int end = e;
while(start<=end)

}
int main(){
    int size,target;
    printf("Enter the Size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Elements in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target : ");
    scanf("%d",&target);
    int store = binarySearch(arr,target,size-1);
    return 0;
}