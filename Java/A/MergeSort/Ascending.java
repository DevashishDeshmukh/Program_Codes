package MergeSort;

import java.util.Random;

public class Ascending {
    public static void main(String[] args) {
        Random ran = new Random();
        int[] arr = new int[100];
        for (int i = 0; i < 100; i++) {
            arr[i] = ran.nextInt(1000);
        }

        for (int k = 1; k < 100; k++) {
            int temp = arr[k];
            int j = k - 1;
            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }

        System.out.println("Input Array : ");
        for (int i = 0; i < 100; i++) {
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
