/* Given with the array of wt of parcels.How many minimum nos of trips Delivery guys has to make to full fill the order.
   One trip can either have 3 parcels of same wt OR 2 parcels of same wt
   If not possible return -1
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={2,4,4,2,6,6,8,8,8,8,8,8,8};
    sort(v.begin(), v.end());
    vector<int> freq;
    int fl=0;
    int a=0, f=0;
    for(int i=0;i<v.size();i++){
        if(fl==0){
            a=v[i];
            f=1;
            fl=1;
        }
        else if(a==v[i]){
            f++;
            
        }
        else if(a!=v[i]){
            freq.push_back(f);
            a=v[i];
            f=1;
        }
        if(i==v.size()-1){
             freq.push_back(f);
             break;
        }
    }
     for(int i=0;i<freq.size();i++)
    cout<<freq[i];
    cout<<endl;
    int min=0;
    for(int i=0;i<freq.size();i++){
        if(freq[i]==1){
            min=-1;
            
        }
        else if(freq[i]%3==0){
            min+=freq[i]/3;
        }
        else if(freq[i]%3==2){
            min+=(freq[i]/3)+1;
        }
        else if(freq[i]%2==0){
            min+=freq[i]/2;
        }
        else min=-1;
    }
   

   cout<<min;
    return 0;
}




