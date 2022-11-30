/*    Typedef is used to give a perdefined variable a new name
      Means as unsigned int is very long to write 
      then using typedef we can call it in program using any small name like ul (or)  u,. etc 
*/
# include<stdio.h>

int main()
{
typedef unsigned int ul;

ul l1=250, l2, l3;
printf("%u", l1);

return 0;

}