#include <iostream>


using namespace std;

int main()
{
 
    int t;
    cin >> t;

    for (int i=0; i< t ;i++ ){
        long totd, gapd, p, q;
        cin >> totd >> gapd >> p >> q;
        int money=0, r=p;
        for (int j= 1; j <= totd ;  ) {
            int day=1;
            while(day<=gapd && j<= totd){
                money+=r;
                day++;
                j++;
            }
            r+=q;
        }
       if(i==t-1)
       printf("%d", money);
       else 
        printf("%d\n", money);
    }

    return 0;
}

/*
int main()
{
    int t;
    cin >> t;

    for (int i=0; i< t ;i++ ){
        float totd, gapd, p, q;
        cin >> totd >> gapd >> p >> q;
        float  div= ((int)totd)%( (int) gapd);
        float n= (int) (totd/gapd);
        if(div>=5)
        n--;
        
        
        float  money=((n/2)*(2*p+((n-1)*q)))*gapd;
       
        if(div!=0){

            money+=div*(p+((n)*q));
        }
       
        
        printf("%0.f\n", money);
    }

    return 0;
}*/