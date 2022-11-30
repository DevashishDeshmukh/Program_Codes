#include <stdio.h>

int main()
{ 
    int n, rem, rev=0;
    printf("enter number:");
    scanf("%d", &n);
    while (n != 0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("number after reversing digits %d\n", rev);
system("pause");
    return 0;
}



