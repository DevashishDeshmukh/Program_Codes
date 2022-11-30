#include <stdio.h>

void parser(char input[100])
{
    int a = 0, s = 0, e = 0, count =0, count1 =0;
    for (int i = 0; i < 100; i++)
    {
      if(input[i]=='>'){
          count++;

          if(count==1)
          s=i;
      }

      if(input[i]=='<'){
          count1++;

          if(count1==2)
          e=i;
      }




    }
  for (int i = (s+2); i < e ; i++)
    {
         printf("%c", input[i]);
    }

}

int main()
{
    char string[]= "<span> This is a heading2 </span>";
    
    parser(string);
    return 0;
}
/*
Input:
<h1> This is a heading </h1> 

Output:
This is a heading

Input:
<span> This is a heading2 </span> 

Output:
This is a heading2


*/
