#include <stdio.h>

int swap (int x, int y){
    int temp = x;
    x = y;
    y = temp;
    return x, y;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}