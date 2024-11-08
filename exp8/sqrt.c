#include<stdio.h>
#include<math.h>

int main(){

    int row,column;
    printf("\nEnter number of rows and columns: ");
    scanf("%d%d",&row,&column);
    float matrix[row][column];

    printf("\nEnter the elements in the matrix: \n");
    for(int i=0; i<row; i++){
        for(int j=0;j<column; j++){
            scanf("%f",&matrix[i][j]);
        }
    }

    printf("Matrix Before operation: ");
    for(int i=0; i<row; i++){
        printf("\n");
        for(int j=0;j<column; j++){
            printf("%.2f ",matrix[i][j]);
            //operartion
            matrix[i][j] = sqrt(matrix[i][j]);
        }
    }

    printf("\nMatrix after the operation: ");
    for(int i=0; i<row; i++){
        printf("\n");
        for(int j=0;j<column; j++){
            printf("%.2f ",matrix[i][j]);
        }
    }

    printf("\n");

    return 0;
}