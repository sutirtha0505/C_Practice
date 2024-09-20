#include <stdio.h>

int main() {
    int a[10][10], b[10][10], row1, column1, row2, column2;

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &column1);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &column2);

    if(column1 == row2){
        printf("Enter the Number of elements in the first matrix\n");

        for(int i = 0; i < row1; i++){
            for(int j= 0; j < column1; j++){
                printf("a[%d][%d] = ", i, j );
                scanf("%d", &a[i][j]);
            }
        }
         printf("Enter the Number of elements in the second matrix \n");

        for(int i = 0; i < row2; i++){
            for(int j= 0; j < column2; j++){
                printf("b[%d][%d] = ", i, j );
                scanf("%d", &b[i][j]);
            }
        }

        printf("Your first matrix is \n");
        for(int i = 0; i < row1; i++){
            for(int j= 0; j < column1; j++){
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("\nYour second matrix is \n");
        for(int i = 0; i < row2; i++){
            for(int j= 0; j < column2; j++){
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        printf("\nProduct of the two matrices is \n");
        int sum = 0, c[10][10];
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column1; j++){
                for(int k = 0; k < column2; k++){
                    sum = sum + a[i][k]*b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }

        for(int i = 0; i < row1; i++){
            for(int j=0; j<column2; j++){
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }



    }
    else {
        printf("Matrices cannot be multiplied. Number of columns in the first matrix must be equal to the number of rows in the second matrix.");
        return 0;
    }
}