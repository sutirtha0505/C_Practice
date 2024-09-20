#include <stdio.h>

int main(){
    int a[10], n, evenSum = 0, oddSum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("The array is [");

    for(int i = 0; i < n; i++){
        if(i== (n-1)){
            printf(" %d", a[i]);
        }
        else{
            printf(" %d, ", a[i]);
        }
    }
    printf("]\n");

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            evenSum += a[i];
        }
        else{
            oddSum += a[i];
        }
    }
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);
}