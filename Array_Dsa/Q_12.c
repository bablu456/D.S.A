#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elemnts in the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = size - 1;
    while(i<j){
        while(i<j && arr[i] % 2!=0)
        i++;
        while(i<j && arr[j] % 2!=0)
        j--;
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
         }
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}