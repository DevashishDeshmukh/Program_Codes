#include <stdio.h>

void arrayRev(int arr[])
{
    
    printf("\nArray after reversal  = ");
    int rev[7]={0};
    for (int i = 0; i < 4; i++)
    {
      rev[i]=arr[3-i];
       printf(" %d, ", rev[i] );
    }
    
}
int main()
{
    int array[] = {1, 2, 3, 4};
    printf("Array before reversal = ");

     for (int  j = 0; j < 4; j++)
    {
        printf(" %d, ", array[j]);
    }
    
    arrayRev(array);

    return 0;
}