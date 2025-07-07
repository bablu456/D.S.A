#include <stdio.h>
int main(){
    int odd_sum = 0;
    int even_sum = 0;
    int size;
    printf("Enter the Size of The Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elemnts in the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even_sum = even_sum + arr[i];
        }else{
            odd_sum = odd_sum + arr[i];
        }
    }
    printf("the even elemnts sum  : %d\n",even_sum);
    printf("the odd elemnts sum  : %d",odd_sum);

    return 0;
}