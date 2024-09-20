#include <stdio.h>

int main(){
    int arr[10], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        printf("arr[%d]: %d\n", (i+1), arr[i]);
    }
}