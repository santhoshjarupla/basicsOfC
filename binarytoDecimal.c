#include<stdio.h>
int main()
{
    printf("Please enter the Binary number");
    int binary;
    scanf("%d", &binary);
    int reminder, weight = 1, decimal =0;
    while(binary !=0)
    {
        reminder = binary%10;
        decimal +=weight*reminder;
        weight *= 2;
        binary = binary/10;
    }
    printf("decimal value = %d", decimal);
    return 0;
}