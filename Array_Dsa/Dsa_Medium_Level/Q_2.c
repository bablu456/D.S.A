#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Elemnts in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    printf("[%d,",arr[i]);
                    printf("%d,",arr[j]);
                    printf("%d]",arr[k]);
                }
            }
        }
    }
}