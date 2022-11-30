#include <stdio.h>
int main()
{
    FILE *ptr;
    char stringRead[34];
    /*This opens file in read mode 
    ptr = fopen("Test.txt", "r");
    fscanf(ptr, "%s", stringRead);
    printf("%s", stringRead);*/

    char stringWrite[34] = "Hi I wrote this in file ";
    //This opens file in write mode (in this all old content of file are erased and new content is written)
    /*ptr = fopen("Test.txt", "w");
    fprintf(ptr, "%s", stringWrite);*/

    //This is opens file in appand mode (in this only new content is added to file)
    ptr = fopen("Test.txt", "a");
    fprintf(ptr, "%s", stringWrite);


    return 0;
}