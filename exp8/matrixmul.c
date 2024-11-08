#include<stdio.h>
#include<math.h>

int main(){

    int row,column,num;
    printf("\nEnter number of rows and columns of Matrix : ");
    scanf("%d%d",&row,&column);
    int matrix[row][column];

    printf("\nEnter the elements in the matrix : \n");
    for(int i=0; i<row; i++){
        for(int j=0;j<column; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nEnter number to multiply: ");
    scanf("%d",&num);

    printf("\nArray Before multiplication: \n");
    for(int i=0; i<row; i++){
        printf("\n");
        for(int j=0;j<column; j++){
            printf("%d ",matrix[i][j]);
            matrix[i][j] = matrix[i][j]*num;
        }
    }

    printf("\nArray After multiplication: \n");
    for(int i=0; i<row; i++){
        printf("\n");
        for(int j=0;j<column; j++){
            printf("%d ",matrix[i][j]);
        }
    }

    printf("\n");

    return 0;
}