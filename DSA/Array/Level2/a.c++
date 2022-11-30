#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	for (int l = 0; l < t; l++) {
	    int n;
	    cin>>n;
	    string s [3*n];
	    int d[3*n];
	    for(int i=0; i<3*n;i++){
	        cin >>s[i]>>d[i];
	    }
	    
	    
	    
	    
	    int sum[3*n]={0};
	    int a=0;
	    for(int i=0; i<3*n;i++){
	        int sub=0;
            if(s[i]!="d"){
	        string str=s[i];
            s[i]="d";
	        sub+=d[i];
	        for(int j=n; j<2*n; j++){
	            if(str==s[j]&&s[j]!="d"){
	                s[j]="d";
	                sub+=d[j];
	                break;
	            }
	        }
	        
	        for(int j=2*n; j<3*n; j++){
	            if(str==s[j]&&s[j]!="d"){
	                s[j]="d";
	                sub+=d[j];
	                break;
	            }
	        }
	        
	        
	        sum[a]=sub;
           // cout<<sum[a]<<" "<<sub<<" "<<a<<endl;
            a++;
            }
	    }
	    
	    
	    
	    sort(sum, sum+a);
	    
	    for(int i=0; i<a;i++){
	        cout<<sum[i]<<" ";
	    }
	    cout <<endl;
	}
	return 0;
}