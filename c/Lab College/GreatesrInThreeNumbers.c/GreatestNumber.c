#include <stdio.h>

int main()
{   int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("numbers entered by you are:\n");
    printf("num1 = %d\nnum2 = %d\nnum3 = %d\n", num1, num2,num3);
    if(num1==num2 && num2==num3)
    {
        printf("Numbers entered by you are equal");
    }
    else{
        if(num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Greatest number among three numbers is %d ", num1);
        }
        
        
        else {
             printf("Greatest number among three numbers is %d ", num3);
        }
    }
    
    else if (num2 > num3) 
    {
         printf("Greatest number among three numbers is %d ", num2);
        
    }
    else {
         printf("Greatest number among three numbers is %d ", num3);
    }
    }
    
    return 0;
}