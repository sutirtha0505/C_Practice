#include <stdio.h>

int main(){
    int a[10][10], row, column;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("the matrix is now\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("After transposing the matrix, you should get the following matrix \n");
    for(int j = 0; j < column; j++){
        for(int i = 0; i < row; i++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}