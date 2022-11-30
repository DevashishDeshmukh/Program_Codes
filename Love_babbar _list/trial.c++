


#include <iostream>
using namespace std;

// Main() function: where the execution of program begins
int main()
{

    // int d[]={4,5,6,7,0,2,1,3};
    // int n = sizeof(d)/sizeof(d[0]);

    //     for(int i=0;i<n;i++){
    //         char a=s[d[i]];
    //         cout<<a<<" ";
    //         s[d[i]]=s[i];
    //         s[i]=a;
    //     }
    //     char a='s';
    string s="lEeTcOdE";
    int cl=0, sl=0;
        for(int i=0;i<s.length();i++){
            int a=(int)s[i];
            if(a>=65 && a<=90){
                if(a>cl){
                    cl=a;
                    }
            }
            else{
                if(a>sl){
                    sl=a;
                    }
            }
        }
        string r="";
        r=r+(char)cl;
        if(cl==sl)
            cout<< r;
        else
            cout<< "";
    

    return 0;
}