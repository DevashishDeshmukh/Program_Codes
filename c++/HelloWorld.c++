
#include <iostream>

using namespace std;
/*
int main()
{
    int t;
    cin >> t;

    for (int i=0; i< t ;i++ ){
		    int n;
		    
            cin >> n;
			int arrA[n];
			int arrP[n];

			for (int j=0;j<n ;j++ ){
		        cin >>  arrA[j];
		    } 
		    
		    for (int j=0;j<n ;j++ ){
		        cin >> arrP[j];
		    } 

			int output=0, oper;

			cin >> oper;
			for (int j=0;j<oper  ;j++ ){
		        int op;
				cin >> op;
		        if(op==1){
		            int arrB[n];
		            for(int k=0; k<n ; k++){
		                arrB[(arrP[k])-1]=arrA[k];
		            }
		          // arrA=arrB.clone();
				  for(int k=0; k<n; k++){
					  arrA[k]= arrB[k];
				  }
		           
		        }
		        
		        if(op==2){
		            int x, y;
					cin >> x;
					x--;
		            cin >> y;
					y--;
		            int temp=arrA[x];
		            arrA[x]=arrA[y];
		            arrA[y]=temp;
		        }
		        
		        if(op==3){
		            int x;
					cin >> x;
		            x--;
		            output= arrA[x];
		        }
		    }
            if(t-1==i)
			cout << output;

			else{
			cout << output;
			cout << "\n";
			}
			/*
		    if(i>0)
		    //printf("\n");
            cout << "\n";
		    int a=0;
		    for(int j=0 ; j<= (n+1)/k ; j++ ){
		        if(x==k*j || (x==(n+1-(k*j)))){
		            //printf("YES");   
                     cout << "YES";
		            a++;
		            break;
		        }}
		   if(a==0)
		   {  // printf("NO");
                  cout << "NO";
		   }} */
//	}
//	return 0;
//}

int main()
{
    int t;
    cin >> t;

       
        for (int i=0;i<t ;i++ ){
            int n, k, f;
            cin >> n >> k >> f;
           
     
 // your code goes here
      

            
            int arr[n][2];

            for (int j=0;j<n ;j++ ) {
                for (int l = 0; l < 2; l++) {
                    cin >> arr[j][l];
                }
            }

            int freetime=0;
            for (int j = 0; j <= f; j++) {
                int a=0;
                for (int l = 0; l <n ; l++) {
                    if((j>arr[l][0] || j==0) && j<=arr[l][1])
                        a++;
                }
                if(a==0)
                    freetime++;
            }

            //System.out.println(freetime);

             if(i==t-1){
                if(freetime>=k){
                    printf("YES");
                }
                else
                    printf("NO");
             }
             
             else{
                 
                if(freetime>=k){
                    printf("YES\n");
                }
                else
                    printf("NO\n");
             }

        }
    
	return 0;
}

   