#include <stdio.h>

int main()
{
    int a[10], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("The array is [");
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1){
            printf("%d", a[i]);
        }
        else  {
            printf("%d, ", a[i]);
        }
    }
    printf("]\n");
}