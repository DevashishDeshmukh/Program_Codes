#include <stdio.h>

float ctf(float);
float ftc(float);
int main()
{
    int a;
    float c, f;
    printf("enter 1 for 'C to F' and enter 2 for 'F to C' : ");
    scanf("%d", &a);
    switch(a)
    {
        case 1 :
        printf("\nenter temp in C:");
        scanf("%f", &c);
        printf("\nThe temp in F is %f", f = ctf(c));
        break;

        case 2 :
        printf("\nenter temp in F:");
        scanf("%f", &f);
        printf("\nThe temp in F is %f", c = ftc(f));
        break;

        default :
        printf("incorrect operator entered");
        break;

    }
    return 0;
}

float ctf(float c )
{
    float f;
    f= 32+c*(1.8);
    return f;
}

float ftc(float f )
{
    float c;
    c = (f-32)*5/9;
    return c;
}
