#include <stdio.h>
int main(){
    int size;
    printf("Enter the Size of The Array : ");
    scanf("%d",&size);
    int arr[size];
    int count = 0;
    printf("Enter the Elements in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int brr[size];
    int k = 0;
    printf("lets remove the duplicates from the array : ");
    for(int i=0;i<size;i++){
        count = 0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            brr[k] = arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++){
        printf("%d ",brr[i]);
    }


    return 0;
}