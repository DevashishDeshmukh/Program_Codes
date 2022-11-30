/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

/*#include <stdio.h>
# include<string.h>

struct Dinfo
{
    char name[50];
    int lno;
    char route[50];
    int km;

}name, lno, route, km;



int main()
{
    int n=3, a;
    printf("Enter vaue of n ");
    scanf("%d", &n);
    printf("\nStart\n");
    a=2;
    

   struct Dinfo d[n];

   for (int i = 0; i < n; i++)
    {
        printf("Enter driver no %d details\nEnter driver name :  ", i+1);
        gets(d[i].name);


    }

     return 0;
}
*/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    /*int n=3;
   // scanf("%d", &n);
    char * str=malloc(n* sizeof(char));
    gets(str);
    printf("%s", str);*/
    char *word="Car";

int lw=(sizeof(word))/(sizeof(char));
printf("%d", lw);
    


    



    return 0;
}