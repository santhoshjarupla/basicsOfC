#include<stdio.h>
void rowTotal(int rowarray[5][5])
{
    int rowSum[5] = {0};
    printf("\t=====rowsum=====\n");
    for(int i =0 ; i<5; i++)
    {
        for(int j = 0; j <5; j++)
        {
            rowSum[i] += rowarray[i][j]; 
        }
            printf("%d\t", rowSum[i]);
    }
    
}
void colomTotal(int collomarray[5][5])
{
    int colomsum[5] = {0};
    printf("\t=====colomsum=====\n");
    for(int i =0 ; i<5; i++)
    {
        for(int j = 0; j <5; j++)
        {
            colomsum[i] += collomarray[j][i]; 
        }
            printf(" %d\t", colomsum[i]);
    }
    
}
int main()
{
    int twodim[5][5] = {{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    //int rowtotal[5] = {0};
    rowTotal(twodim);
    colomTotal(twodim);
    return 0;
}
