#include<stdio.h>

int main()
{
    printf("Please enther two number for sum :\n");
    int a, b, sum = 0, carry = 0;
    scanf("%d %d", &a, &b);
    while(b != 0)
    {
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    printf("sum of two number  = %d", a);
return 0;
}