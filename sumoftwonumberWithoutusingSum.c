#include <stdio.h>
int main()
{
   
    //this logic doesn't hold for the -ve numbers
    #if 0
     int x = 5,y = 3;
    while(y !=0)
    {
        x++;
        y--;
    }
    printf("sum = %d", x);
#endif
    printf("enter the two number to add:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    if(a>0)
    {
        while(a != 0)
        {
            b++;
            a--;
        }
    }
    else if(a<0)
    {
        while(a != 0)
        {
            a++;
            b--;
        }
    }
    printf("sum of two numbers  = %d", b);
    return 0;
}