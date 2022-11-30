#include <stdio.h>
int main()
{   
    float  s1, s2, s3, s4, s5, t1, t2, t3, t4, t5, SUM1,SUM2,percentage;
    printf("enter marks obtained in subjects s1, s2, s3, s4, s5 respectively:\n");
    scanf("%f%f%f%f%f", &s1,&s2,&s3,&s4,&s5);

    printf("enter Total marks of each subjects s1, s2, s3, s4, s5 respectively:\n");
    scanf("%f%f%f%f%f", &t1,&t2,&t3,&t4,&t5);
    SUM1=s1+s2+s3+s4+s5;
    SUM2=t1+t2+t3+t4+t5;
  
    printf("sum of marks obtained in each subject = %f\n sum of Total marks of each subject = %f\n", SUM1, SUM2);
    printf("Percentage = %f", percentage= (SUM1)*100/(SUM2));
    system("pause");
    return 0;
    
}
 
