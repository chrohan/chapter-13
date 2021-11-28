#include <stdio.h>                             //to search how many times a number appears in an array
int main()
{
    int i;
    int num[15] = {1, 2, 3, 4, 5, 6, 8, 2, 45, 76, 1, 1, 2, 2, 45};

    int j, numenter, count = 0;
    printf("enter the number to be searched\n");
    scanf("%d", &numenter);

    for (j = 0; j < 15; j++)
    {
        if (num[j] == numenter)
        {

            count++;
        }
    }
    printf("%d", count);
}