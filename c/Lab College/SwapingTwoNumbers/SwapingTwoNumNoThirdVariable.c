#include <stdio.h>

int main()
{
    int a, b;
   printf("Enter Two Numbers ");
   scanf("%d%d", &a, &b);
   printf("\nNumbers entered by you are \na = %d\nb = %d", a, b);
   
   a = a+b;
   b = a-2*b;
   a = (-b + a)/2;
   b = b+a;
   printf("\nnumbers after swapping are\na = %d\nb = %d", a, b);
    
  system("pause");
    return 0;
}