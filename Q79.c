#include <stdio.h>
int main(){
    int row1, col1;
    printf("Enter row and column of first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the elements of first matrix: ");
    int mat1[row1][col1];
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    int row2, col2;
    printf("Enter row and col of second matrix");
    scanf("%d %d", &row2, &col2);

    if(col1 != row2){
        printf("Matrix multiplication not possible.");
        return 1;
    }

    printf("Enter the elements of second matrix: ");
    int mat2[row2][col2];
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    

    int mat3[row1][col2];
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            mat3[i][j] = 0;
            for(int k=0; k<col1; k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;

}