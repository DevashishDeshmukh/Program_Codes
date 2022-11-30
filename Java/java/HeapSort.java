package Primary.java;
import java.util.Scanner;
public class HeapSort{
    
    public void sort(int arr[]){
        int n= arr.length;
        for(int k=n/2-1;k>=0; k--)
            heapSo(arr, n, k);

            for(int k=n-1; k>0;k--){
                int temp= arr[0];
                arr[0]=arr[k];
                arr[k]=temp;

                heapSo(arr, k, 0);
            }
        }
        void heapSo(int arr[], int n, int j){
            int large=j;
            int r=2*j+2;
            int l = 2*j+1;
            if(l<n&&(arr[l]>arr[large]))
            large=l;

            if(r<n&&(arr[r]>arr[large]))
            large=r;

            if(large!=j){
                int temp=arr[j];
                arr[j]=arr[large];
                arr[large]=temp;
                heapSo(arr, n, large);
            }
        }


        public static void main(String[] args) {
            Scanner sc= new Scanner(System.in);
            System.out.print("Enter nos of elements to add : ");
            int n= sc.nextInt();
            int arr[]=new int[n];
            System.out.println("Enter Elements : ");
            for (int m = 0; m < n; m++) {
                arr[m]=sc.nextInt();
            }

            HeapSort hs= new HeapSort();
            hs.sort(arr);

            System.out.println("Array after sorting : ");

            for(int m=0;m<n;m++){
                System.out.print(arr[m]+" ");  
            }
            
        }
    }
