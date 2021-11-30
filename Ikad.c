#include<stdio.h>
int modify (int *, int);
int main()
{
   int k, array[10] = {1,2,3,4,5,6,7,8,9,10};
   modify(&array[0],10);

   for(k = 0; k < 10; k++)
   {
       printf("%d\n",array[k]);
   }
   return 0;

}
 
 int modify(int *j,int n)
 {
     int i;
     
     for(i = 0; i < n; i++)
     {
          j[i] = j[i]*3;      
     }
     return j[i];
 }