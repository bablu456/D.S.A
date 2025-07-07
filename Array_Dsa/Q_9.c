#include <stdio.h>
int main()
{
    int odd_sum = 0;
    int even_sum = 0;
    int size;
    printf("Enter the Size of The Array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elemnts in the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (i % 2 == 0)
        {
            // printf("%d ", i);
            even_sum = even_sum + arr[i];
        }
        else
        {
            odd_sum = odd_sum + arr[i];
        }
    }
    printf("\n");
    printf("%d \n",even_sum);
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("%d",odd_sum);

    return 0;
}