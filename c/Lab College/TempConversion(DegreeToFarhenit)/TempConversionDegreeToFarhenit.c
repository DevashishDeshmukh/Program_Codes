#include <stdio.h>
int main()
{   
    float t1, t2;
    printf("Enter temperature in Degree centigrade: ");
    scanf("%f", &t1 );
    printf("Temperature in Fahrenheit is %f", t2 = 32+(t1*1.8));
    system("pause");
    return 0;
}
