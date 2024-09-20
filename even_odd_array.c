#include <stdio.h>

int main()
{
    int a[10], n, oddCount = 0, evenCount = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("The number of even number is %d", evenCount);
    printf(" and the number of odd numbers is %d.\n", oddCount);
}