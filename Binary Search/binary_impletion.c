#include <stdio.h>
int binary_Search(int arr[], int tar, int nd)
{
    int start = 0;
    int mid = 0;
    int end = nd;
    int target = tar;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            // printf("Elemnets found at : %d",mid);
            return mid;
        }
    }
}
int main()
{
    int size;
    printf("Enter the Size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elemnts : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Lets sort this Array : ");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d  ,",arr[i]);
    }
    printf("Enter the number for the target : ");
    int target;
    scanf("%d", &target);
    int end = size - 1;
    int result = binary_Search(arr, target, end);
    printf("This is Index : %d\n",result);
    printf("%d", arr[result]);
    return 0;
}