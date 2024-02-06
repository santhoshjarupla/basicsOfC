#include<stdio.h>
int main()
{
    int array[]= {2,33,54,1,4,6};
    int arraysize;
    arraysize = sizeof(array)/sizeof(array[0]);
    int reverse[arraysize];
    printf("=====order of array = %d=====\n", arraysize);
    for(int i = 0; i<arraysize;i++)
    {
        printf("array[%d] = %d\t", i, array[i]);
    }
    //reverse of the array
    printf("\n=====reverse of the array=====\n");
    for(int j =0;j< arraysize;j++)
    {         
            reverse[j] = array[arraysize - j - 1];
            printf("reverse[%d] = %d\t", j, reverse[j]);
    }

   printf("array = %x, &array = %x\n", array, &array);
   printf("array +1  = %x, &array+1 = %x, *(&array) = %d, *(&array+1) = %d\n", array +1, &array+1, *(&array), *(&array+1));
  //lenght of an array using the pointer arthematic
  int lenght = *(&array +1) - (array );
  printf("lenght = %d", lenght);
    return 0;
}