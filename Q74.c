#include <stdio.h>
int main(){
    int rows , col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &col);

    
    int transpose[col][rows];
    int arr[rows][col];
    printf("Enter elements of matrix: ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
            transpose[j][i] = arr[i][j];
        }
    }
    
    for(int i=0; i<col; i++){
        for(int j=0; j<rows; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}