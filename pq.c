#include<stdio.h>
int main()
{
    int array[14] = {12,23,32,6,76,43,57,24,98,28,98,90,57,99};
    
    int i, min;

     min = array[0] ;

    for(i = 0; i < 14; i++)
    {
        if(array[i] < min)
        min = array[i];
    }
  printf("%d\n",array[i]);
  return 0;
     
} 