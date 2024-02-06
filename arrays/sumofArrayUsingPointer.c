#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,6,6};
    int sum =0, *p = a;
    int size = sizeof(a)/sizeof(a[0]);
    for(p;p<a+size;p++)
    {
        sum += *p;
        printf("elements of an array = %d a\n", *p);
    }
    fprintf(stderr,"sum =%d", sum);
    return 0;
}