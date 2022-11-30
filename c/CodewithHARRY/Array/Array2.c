/*******************************************************************************************************
//
//      ONE DIMENSONAL ARRAY
//
// C program to store temperature of two cities of a week and display it.
// printing this above array in form of matrix{of size 2*7}
*********************************************************************************************************/
#include <stdio.h>
int main()
{

    int temp[2][7], i;
    for (int city = 0; city < 2; city++)
    {
        
        printf("\nfor city %d\n\n", city +1);
         i = 0;
        for ( i = 0;i < 7; i++)
        {
            printf("Temp of city %d on day %d:", city+1, i+1);
            scanf("%d", & temp[city][i] );
        }
    }


printf("\nprinting in element by element format\n");
    for (int j = 0; j <=1; j++)
    {
        for (int k = 0; k <=6; k++)
        {
            printf("temp[%d][%d] = %5.2d\n", j, k, temp[j][k]);
        }
        
    }
    
printf("\nprinting in matrix format\n");
    for (int j = 0; j <=1; j++)
    {
        for (int k = 0; k <=6; k++)
        {
            printf("%0.2d  ", temp[j][k]);
        }
        printf("\n");
    }
    
    return 0;
}
