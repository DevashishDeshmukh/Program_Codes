/* if we want the string of length 10 charcters then 
   keep size of string as 11 at least because last 
   one place is for null charcter(\0)
*/
/*# include <stdio.h>
# include<stdlib.h>
int main()
{
    char str[]= {'d', 'e', 'v', 'a','s','h','i','s','h','\0'};    // declaring string character by character and ending string with null format specifier (\0)
    printf_s(str);
    char string[]= "deavshish";
    printf("\n%s\n", string);
  
    printf_s(string);
    printf("\n");
    gets(str);       // taking input from user
    printf_s(str);  // printing the string 

int n=5;
    
 srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    printf("%d", rand() % n);
    return 0;
}*/
#include <stdio.h>

int main(void) {
	int cases;
	int n, k, b=0, c=0;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
	    scanf("%d%d", &n, &k);
	    char a[n];
	    scanf("%s", &a);
	   for(int j=0; j<n; j++){
	        d:
	       if(a[j]=='*'){
	       
	           b=0;
	           for(int l=j; (l-j+1)<=k && l<=n ; l++){
	               if(a[l]=='*')
	               b++;
	               else 
	               goto d;
	           }
	       }
	       if(b==k){
	              printf("YES");
	              c=0;
	              goto e;
	          }
	          else
	          c++;
	   }
	   e :
	   if(c!=0)
	   printf("NO");
	}
	return 0;
}

