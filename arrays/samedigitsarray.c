#include<stdio.h>
int main()
{
    int N, i = 0;
    // to find the matching of number we need an array 
    int match[10] = {0};
    int decimal;
    printf("enter the number\n");
    scanf("%d",&N);

//travers to each digit to find the repeated occurance
while (N > 0)
{
    decimal = N%10;
    if(match[decimal] == 1)
    {
        break;
    }
    match[decimal] = 1;
    N = N/10;
}
if (N>0)
printf("double digit occured\n");
else
printf("no digit match each other");
return 0;
}
