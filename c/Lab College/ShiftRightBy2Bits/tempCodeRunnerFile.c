#include <stdio.h>

int main()
{
    int n,a;
    printf("enter an integer number:");
    scanf("%d", &n);
    a = n <<2;
    printf("number after shifting left by 2 bits %d", a);
    
    return 0;
}

