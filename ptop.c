#include <stdio.h>

int main() {
    int x = 10;         // A normal integer variable
    int *p = &x;        // A pointer to an integer (stores the address of x)
    int **pp = &p;      // A pointer to a pointer (stores the address of p)

    // Printing the values
    printf("Value of x: %d\n", x);             // 10
    printf("Value of *p (points to x): %d\n", *p); // 10
    printf("Value of **pp (points to *p, which points to x): %d\n", **pp); // 10

    // Addresses
    printf("Address of x: %p\n", (void*)&x);   // Address of x
    printf("Address of p: %p\n", (void*)&p);   // Address of p
    printf("Value of pp (Address of p): %p\n", (void*)pp); // Address stored in pp (which is the address of p)

    return 0;
}
