# include <stdio.h>

int main(){
    int a, b, *ptra, *ptrb;

    ptra=&a;
    ptrb=&b;

    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);

    
    int sum= *ptra +*ptrb;
    printf("Sum of numbers : %d", sum);

    return 0;
}