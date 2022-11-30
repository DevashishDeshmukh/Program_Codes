#include <stdio.h>

int main()
{   
    int a, b, c = 1, d;

    printf("enter number whose table you want(a) = ");
    scanf("%d", &a);


    printf("enter number of rows you want in the table(b) = ");
    scanf("%d", &b);


    printf("\nThis is table of  %d upto %d rows\n", a, b);

    printf("*********************\n");


    while (c <= b)
    {  
        printf("%2d * %2d = %d\n", a, c, d = a * c);
         c = c + 1;
    }

    printf("**********************");
system("pause");
    return 0;

}
