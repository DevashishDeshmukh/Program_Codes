package InsertionSort;
import java.util.Random;
public class InsertionSort {
    public static void main(String[] args) {
        Random ran = new Random();
        int []arr= new int[100];
        System.out.println("Input Array : ");
        for(int i =0 ; i< 100 ; i++){
        arr[i] = ran.nextInt(1000);
        System.out.print(arr[i]+" ");
        if(i%12==0 && i!=0){
        System.out.println("");
        }
    }
        System.out.println(" \r\n\r\nAfter sort Array :");
        long start = System.nanoTime();
        for(int k =1; k< 100 ;k++ ){
            int temp = arr[k];
            int j= k-1;
            while(j>=0 && arr[j]> temp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }

    
    long end = System.nanoTime();
    for(int i =0 ; i< 100 ; i++){
    System.out.print(arr[i]+" ");
    if(i%12==0 && i!=0){
    System.out.println("");
    }
    }
    long elapsedTime = end - start;
    long time = elapsedTime/1000000;
    long d= (elapsedTime%1000000)/1000;
    System.out.println("\r\n\r\nTime taken for sorting ==>"+time+"."+d+" milliseconds ");
   
    }
}
