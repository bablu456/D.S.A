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
    printf("Enter the target number here : ");
    int target;
    scanf("%d", &target);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                for (int m = k + 1; m < size; m++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[m] == target)
                    {
                        printf("[%d,", arr[i]);
                        printf("%d,", arr[j]);
                        printf("%d,", arr[k]);
                        printf("%d]", arr[m]);
                    }
                }
            }
        }
    }
    return 0;
}