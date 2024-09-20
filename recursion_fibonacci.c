#include <stdio.h>

int fibonacci( int x){
    if(x==0) {
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else {
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

int main() {
    int n;
    printf("Enter the number till which the series will continue of fibonacci series: ");
    scanf("%d", &n);
    // printf("The fibonacci number at position %d is %d.", n, fibonacci(n));

    for (int i = 0; i < n; i++) {
        printf("The fibonacci number at position %d is %d.\n", i, fibonacci(i));
    }
}