#include<stdio.h>
int main()
{
    int a[2][2] = {{1,2},{3,4}};
    int *p = &a[0][0];
    
    for(p; p<=&a[1][1]; p++)
    {
        printf("%d  ", *p);
    }
    return 0;
}