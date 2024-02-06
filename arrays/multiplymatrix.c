#include<stdio.h>
#define MAX 10
int main ()
{
    int A[MAX][MAX] = {{0}};
    int B[MAX][MAX] = {{0}}, MUL[MAX][MAX] = {{0}}, sum = 0;
    int arows, brows, acoloms,bcoloms;
    printf("enter the matrix A rows and coloms values \n");
    scanf("%d %d", &arows,&acoloms);
    printf("enter the matrix A elements \n");
    for(int i= 0; i<arows;i++)
    {
        for(int j = 0;j <acoloms;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter the matrix B rows and coloms \n");
    scanf("%d %d", &brows,&bcoloms);
    if(acoloms != brows)
    {
        printf("this matrix operation can not be performed, sorry :)!");
    }
    else
    {
        printf("enter the matrix B elements \n");
        for(int a= 0; a<brows; a++)
        {
            for(int b = 0; b <bcoloms; b++)
            {
                scanf("%d",&B[a][b]);
            }
        }
        //logic to perform matrci multiplicatioin
        for(int x =0; x < arows;x++)
        {
            for(int y=0;y<bcoloms;y++)
            {
                for(int k = 0;k< brows; k++)
                {
                    sum += A[x][k]*B[k][y];
                }
                MUL[x][y]=sum;
                printf("sum = %d\t", sum);
                //sum = 0;
            }
        }
         printf("\n ======multiplied matrix =======\n");
        for(int i =0; i<arows; i++)
        {
            for(int j = 0; j<bcoloms;j++)
            {
                  printf("%d\t", MUL[i][j]);
                  if(j == bcoloms -1)
                  printf("\n");
            }
        }

    }
    return 0;
}