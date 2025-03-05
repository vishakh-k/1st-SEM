#include<stdio.h>
void matrixMultiplication(int mat1[][10],int mat2[][10],int res[][10],
int r1,int c1,int c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++){
                res[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
}
int main(){
    int r1,c1,r2,c2;
    printf("Enter the number of row and colums first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of row and colums second matrix:");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2){
        printf("matrix multiplication is not possible");
    }
    int mat1[10][10],mat2[10][10],res[10][10];
    printf("Enter the elements of first matrix");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    matrixMultiplication(mat1,mat2,res,r1,c1,c2);
    printf("After multiplication\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf(" %d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}