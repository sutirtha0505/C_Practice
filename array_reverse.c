#include <stdio.h>

int main(){
    int arr[10], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The array in reverse order is [");

    for (int i = (n-1); i >= 0; i--){
        if(i == 0){
            printf("%d", arr[i]);
        }
        else{
            printf("%d, ", arr[i]);
        }
    }
    printf("]\n");
}