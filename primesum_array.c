    #include <stdio.h>

    int isPrime(int x){
        if(x <= 1)
            return 0;
        for(int i = 2; i <= x/2; i++){
            if(x % i == 0){
                return 0;
            }
        }
        return 1;
    }

    int main() {
        int a[10], n, sumPrime =0;
        printf("Enter the size of the array: ");
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            printf("Enter element %d: ", i+1);
            scanf("%d", &a[i]);
        }
        printf("The array is [");
        for(int i =0; i< n ; i++){
            if(i == (n-1)){
                printf(" %d", a[i]);
            } else {
                printf(" %d, ", a[i]);
            }
        }
        printf("]\n");

        for(int i = 0; i< n; i++){
            if(isPrime(a[i])){
                sumPrime += a[i];
            }
        }
        printf("Sum of prime numbers: %d\n", sumPrime);

    }