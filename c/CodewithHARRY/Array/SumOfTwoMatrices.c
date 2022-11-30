#include <stdio.h>
int main()
{
    int mat[2][2][2], sum [2][2], i, j, k;
    for (int i = 1; i <=2; i++)
    {
      
       int j =1;
       printf("enter values for matrix %d\n", i);

       for (int j = 1; j <= 2; j++)
       {
           int k = 1;

           for (int k = 1;k <= 2; k++)
           {
              printf("enter element %d%d of matrix %d = ", j, k, i);
              scanf("%d", &mat[i][j][k] );
            }
        }
    }
    
    j = 1;
    k = 1;
    

    printf("\nsum of matrix 1 and matrix 2 gives \n");

    for (int j = 1; j <= 2; j++)
       {
           int k = 1;

           for (int k = 1;k <= 2; k++)
           {
              sum [j][k] = (mat[1][j][k]) + (mat[2][j][k]);
              printf("element %d%d is %d\n", j, k, sum [j][k] );
            }
        }
    
    
    return 0;
}