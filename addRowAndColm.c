#include<stdio.h>
int main(){
    int rows,column;
    printf("Enter rows:");
    scanf("%d",&rows);
    printf("Enter column:");
    scanf("%d",&column);
    int matrix[rows][column];
    int rowSum[rows];
    int colSum[column];
    for(int i = 1;i<rows;i++){
        rowSum[i] = 0;
    }
    for(int j=0;j<column;j++){
        colSum[j] = 0;
    }
    printf("Enter the elements of matrix:\n");
    for(int i = 0;i<rows;i++){
        for(int j=0;j<column;j++){
            printf("elements [%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
      for(int i= 0;i<rows;i++){
        for(int j=0;j<column;j++){
            rowSum[i] += matrix[i][j];
        }
    }
    for(int j= 0;j<column;j++){
        for(int i=0;i<rows;i++){
            colSum[j] += matrix[i][j];
        }
    }
    printf("\nSum of each rows:\n");
    for(int i =0 ;i<rows;i++){
        printf("Sum of rows %d =%d\n",i,rowSum[i]);
    }

     printf("\nSum of each column:\n");
    for(int j =0 ;j<column;j++){
        printf("Sum of rows %d =%d\n",j,colSum[j]);
    }
}