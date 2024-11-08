#include<stdio.h>
#include<math.h>

int main(){

    int row,column,num,r1,r2;
    printf("\nEnter number of rows and columns of Matrix : ");
    scanf("%d%d",&row,&column);
    int matrix[row][column];

    printf("\nEnter the elements in the matrix : \n");
    for(int i=0; i<row; i++){
        for(int j=0;j<column; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nArray Before interchnaging: ");
    for(int i = 0; i < row; i++){
        printf("\n");
        for(int j = 0; j < column; j++){
            printf("%d ",matrix[i][j]);
        }
    }

    printf("\nEnter two rows to interchange: ");
    scanf("%d%d",&r1,&r2);

    for(int i = 0; i < column; i++){
        int temp = matrix[r1-1][i];
        matrix[r1-1][i] = matrix[r2-1][i];
        matrix[r2-1][i] = temp;
    }

    printf("\nArray after interchnaging: ");
    for(int i = 0; i < row; i++){
        printf("\n");
        for(int j = 0; j < column; j++){
            printf("%d ",matrix[i][j]);
        }
    }

    printf("\n");

    return 0;
}