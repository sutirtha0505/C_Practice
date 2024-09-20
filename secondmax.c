#include <stdio.h>


int main(){
    int a[10],max1, max2, min, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    min = a[0];
    for(int i = 0; i<n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    max1 = min;
    max2 = min;

    for(int i = 0; i<n; i++){
        if(a[i]>max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i]>max2 && a[i]!=max1){
            max2 = a[i];
        }
    }
    printf("Second maximum number: %d\n", max2);
}