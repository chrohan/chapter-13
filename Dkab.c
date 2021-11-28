#include<stdio.h>
int main()
{
    int i, pcount = 0, ncount = 0, ecount = 0, ocount =0, j, k, l, num[15] = {12,34,-56,87,98,36,-3,1,23,-45,78,44,55,77,19};
    
    for(i = 0; i < 15; i++)
    {
        if (num[i]%2 == 0)
        {
            ecount++;
            
        }
        else{
           ocount++;
        }
        if(num[i] >= 0) 
        {
            pcount++;
        }
        else
            ncount++;

    }
printf("number of even numbers = %d, number of odd numbers = %d, number of positve number = %d, number of negative numbers = %d \n",ecount,ocount,pcount,ncount);

}