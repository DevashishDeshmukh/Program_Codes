#include <stdio.h>

int main()
{
    int a= 2, b, c = 0, y;
    printf("enter the number:");
    scanf("%d", &y);
    for(a = 2;a <= (y/2); a++)
    {
        b = y % a;
        if( b == 0)
        { 
            c++;
        }
        
    }
    if (c == 0)
    {
        printf("the %d is a prime number", y);
    }
    else
    {
        printf("the %d is not a prime number", y);
    }
    system("pause");
    return 0;
}

