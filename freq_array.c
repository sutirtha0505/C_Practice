#include <stdio.h>

int main() {
    int n;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize all frequencies to -1 (unprocessed elements)
    }

    // Calculate frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1; // Initialize count for each element

        // Skip this element if it has already been counted
        if (freq[i] == 0)
            continue;

        // Check for duplicate elements
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark duplicate elements as counted
            }
        }

        // Store frequency of current element
        freq[i] = count;
    }

    // Print the frequency of each element
    printf("\nElement | Frequency\n");
    printf("-------------------\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d       | %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
                                        