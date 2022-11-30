package MergeSort;

import java.util.Random;

public class MergeSort {

    public void sort(int a[], int l, int r) {
        if (l < r) {
            int mid = (l + r) / 2;
            sort(a, l, mid);
            sort(a, mid + 1, r);
            merge(a, l, mid, r);
        }
    }

    public void merge(int a[], int l, int mid, int r) {
        int l1 = mid - l + 1;
        int l2 = r - mid;

        /* Create temp arrays */
        int L[] = new int[l1];
        int R[] = new int[l2];

        /* Copy data to temp arrays */
        for (int i = 0; i < l1; ++i)
            L[i] = a[l + i];
        for (int j = 0; j < l2; ++j)
            R[j] = a[mid + 1 + j];

        /* Merge the temp arrays */

        // Initial indexes of first and second subarrays
        int i = 0, j = 0;

        // Initial index of merged subarry array
        int k = l;
        while (i < l1 && j < l2) {
            if (L[i] <= R[j]) {
                a[k] = L[i];
                i++;
            } else {
                a[k] = R[j];
                j++;
            }
            k++;
        }

        /* Copy remaining elements of L[] if any */
        while (i < l1) {
            a[k] = L[i];
            i++;
            k++;
        }

        /* Copy remaining elements of R[] if any */
        while (j < l2) {
            a[k] = R[j];
            j++;
            k++;
        }
    }

    public static void main(String[] args) {
            
        
        Random ran = new Random();
        int[] arr = new int[100];
        System.out.println("Input Array : ");
        for (int i = 0; i < 100; i++) {
            arr[i] = 1000 + ran.nextInt(9000);
            System.out.print(arr[i] + " ");
            if (i % 12 == 0 && i != 0) {
                System.out.println("");
            }
        }
        MergeSort ob = new MergeSort();
        long start = System.nanoTime();
        ob.sort(arr, 0, 99);

        long end = System.nanoTime();
        System.out.println("\r\n\r\nAfter sort Array : ");
        for (int i = 0; i < 100; i++) {
            System.out.print(arr[i] + " ");
            if (i % 12 == 0 && i != 0) {
                System.out.println("");
            }
        }
        long elapsedTime = end - start;
        long time = elapsedTime / 1000000;
        long d = (elapsedTime % 1000000) / 1000;
        System.out.println("\r\n\r\nTime taken for sorting ==>" + time + "." + d + " milliseconds ");

    
    }
}
