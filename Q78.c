#include <stdio.h>


    int sumd(int matrix[][100], int n){
        int sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                sum += matrix[i][j];
                }
                else
                continue;
            }
        }
        return sum;
    }

    int main(){
    int n;
    printf("Enter size of matrix : ");
    scanf("%d", &n);

    printf("Enter elements of matrix: ");
    int matrix[100][100];
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &matrix[i][j]);

        }
    }

    printf("%d", sumd(matrix, n));

    return 0;
    }
