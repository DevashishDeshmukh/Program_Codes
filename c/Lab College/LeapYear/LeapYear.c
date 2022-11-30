#include <stdio.h>
int main()
{   int a, b, c, y;
    printf("enter the year :");
    scanf("%d", &y);
    a = y % 4;
    b = y % 100;
    c = y % 400;
    if(a == 0)
    {        if (b == 0)
        {            if ( c == 0)
            {
                printf("The year you entered is a leap year");
            }
            else{
                printf("The year you entered is not a leap year");
            }
        }
        else{
            printf("The year you entered is not a leap year");
        }
    }
    else{
        printf("The year you entered is not a leap year");
    }
    system("pause");
    return 0;}


