#include<stdio.h>
int iterrativeFibanacci(int n)
{
    int next, i = 2, a = 0, b = 1;

    if (n <= 0)
    {
        return 0;
    }
    for(i; i <=n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}
int recurssivefibo(int x)
{
    if(x<=1)
        return x;
    else
    return  recurssivefibo(x-1)+recurssivefibo(x-2);
}
int main()
{
    int n;
    printf("which position febinacci number \n");
    scanf("%d", &n);
    printf("fibonacci number is = %d\n",iterrativeFibanacci(n));
    printf("recurssive fibo number is = %d\n", recurssivefibo(n));
    return 0;
}