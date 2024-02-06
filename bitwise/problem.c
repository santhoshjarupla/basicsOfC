#include<stdio.h>
int main()
{
    int var = 75;
    int  var2 = 56;
    int num;
    num = sizeof(var)?(var2>26 ? ( (var ==75)? 'A':0):0) :0;
    printf("num value = %d", num);
    return 0;
}
