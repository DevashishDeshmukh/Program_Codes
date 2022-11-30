#include <stdio.h>
int main()
{  int  a, b, n;
    char opera;
    printf("Enter operator you want to perform out of[ +, -, *, /]");
    scanf("%c", &opera);
    printf("enter two numbers ");
    scanf("%d%d", &a, &b);
    switch(opera)
    {  case '+' :
        printf("%d+%d=%d", a, b, n=a+b);
        break;
        case '-' :
        printf("%d-%d=%d", a, b, n=a-b);
        break;
        case '*' :
        printf("%d*%d=%d", a, b, n=a*b);
        break;
        case '/' :
        printf("%d/%d=%d", a, b, n=a/b);
        break;
        default :
        printf("error invalid oprator entered");
        break;  }
    return 0;}