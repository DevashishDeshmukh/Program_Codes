#include <stdio.h>
int main()
{
    int a, s, l, large, small, p = 0, n = 0, z = 0;
    printf("enter numbers of elements you want in array: ");
    scanf("%d", &a);
    int num[a];
    printf("Enter %d numbers \n", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < a; i++)
    {
        printf("\n  num[%d]\t%5d", i, num[i]);
    }

    if (num[0] < num[1])
    {
        large = num[1];
    }
    else
    {
        large = num[0];
    }
    for (int k = 2; k < a; k++)
    {
        if (num[k] > large)
        {
            large = num[k];
        }
    }

    for (l = 0; l < a; l++)
    {
        if (num[l] == large)
        {
            break;
        }
    }
    printf("\nlargest number entered is\t num[%d] = %d", l, num[l]);

    if (num[0] < num[1])
    {
        small = num[0];
    }
    else
    {
        small = num[1];
    }
    for (int n = 2; n < a; n++)
    {
        if (num[n] < small)
        {
            small = num[n];
        }
    }

    for (s = 0; s < a; s++)
    {
        if (num[s] == small)
        {
            break;
        }
    }
    printf("\nsmallest number entered is\t num[%d] = %d", s, num[s]);

    for (int j = 0; j < a; j++)
    {
        if (num[j] > 0)
            p++;

        if (num[j] < 0)
            n++;

        if (num[j] == 0)
            z++;
    }
    printf("\npositive numbers = %d \n", p);
    printf("negative  numbers = %d \n", n);
    printf("numbers equal to zero = %d \n", z);
    return 0;
}
