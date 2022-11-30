package A.QuickSort;
import java.util.*;
import java.util.Random;
import java.util.Arrays;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        RandomQuick_sort obj2 = new RandomQuick_sort();
        Quick_sort obj1 = new Quick_sort();
        Counting_sort obj3 = new Counting_sort();
        System.out.print("\nChoose one of the following option\n1. Quick Sort\n2. Randomized Quick Sort\n3. Counting Sort\nEnter (1 or 2 or 3): ");
        int a = sc.nextInt();
        System.out.print("\nEnter the size of array: ");
        int n = sc.nextInt();
        double avgTime = 0, avgdTime = 0, avgaTime = 0;
        Random ran = new Random();
        for (int k = 0; k < 10; k++) {
            int[] arr = new int[n];
            int[] arr1 = new int[n];
            int[] arr2 = new int[n];
            for (int i = 0; i < n; i++) {
                arr1[i] = arr2[i] = arr[i] = 1000 + ran.nextInt(9000);
            }
            Arrays.sort(arr1);
            for (int l = 0; l < 2; l++) {
                Arrays.sort(arr2);
                for (int p = 0; p < arr2.length; p++)
                    arr2[p] *= (-1);
            }
            if (a == 3) {
                long start = System.nanoTime();
                obj3.csort(arr);
                long end = System.nanoTime();
                avgTime += (end - start);
                long startAsc = System.nanoTime();
                obj3.csort(arr1);
                long endAsc = System.nanoTime();
                avgaTime += (endAsc - startAsc);

                long startDsc = System.nanoTime();
                obj3.csort(arr2);
                long endDsc = System.nanoTime();
                avgdTime += (endDsc - startDsc);
            }
            if (a == 2) {
                long start = System.nanoTime();
                obj2.RanQsort(arr, 0, n - 1);
                long end = System.nanoTime();
                avgTime += (end - start);
                long startAsc = System.nanoTime();
                obj2.RanQsort(arr1, 0, n - 1);
                long endAsc = System.nanoTime();
                avgaTime += (endAsc - startAsc);
                long startdDsc = System.nanoTime();
                obj2.RanQsort(arr2, 0, n - 1);
                long enddDsc = System.nanoTime();
                avgdTime += (enddDsc - startdDsc);
            }
            if (a == 1) {
                long start = System.nanoTime();
                obj1.qsort(arr, 0, n - 1);
                long end = System.nanoTime();
                avgTime += (end - start);

                long startAsc = System.nanoTime();
                obj1.qsort(arr1, 0, n - 1);
                long endAsc = System.nanoTime();
                avgaTime += (endAsc - startAsc);

                long startDsc = System.nanoTime();
                obj1.qsort(arr2, 0, n - 1);
                long endDsc = System.nanoTime();
                avgdTime += (endDsc - startDsc);
            }
        }
        System.out.println("\naverage of time for 10 times of random input = " + (double) (avgTime / 10) + "ns");
        System.out.println("\naverage of time for 10 times of ascending input is = " + (double) (avgaTime / 10) + "ns");
        System.out.println("\naverage of time for 10 times of descending input is = " + (double) (avgdTime / 10) + "ns");
    }
}

class Quick_sort {

    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high);
        return (i + 1);
    }

    void qsort(int[] arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            qsort(arr, low, pi - 1);
            qsort(arr, pi + 1, high);
        }
    }
}

class RandomQuick_sort {
    static void random(int arr[], int low, int high) {

        Random rand = new Random();
        int pivot = rand.nextInt(high - low) + low;

        int temp1 = arr[pivot];
        arr[pivot] = arr[high];
        arr[high] = temp1;
    }

    static int partition(int arr[], int low, int high) {
        random(arr, low, high);
        int pivot = arr[high];

        int i = (low - 1);
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return i + 1;
    }

    void RanQsort(int arr[], int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            RanQsort(arr, low, pi - 1);
            RanQsort(arr, pi + 1, high);
        }
    }
}

class Counting_sort {
    void csort(int[] arr) {
        int max = Arrays.stream(arr).max().getAsInt();
        int min = Arrays.stream(arr).min().getAsInt();
        int range = max - min + 1;
        int count[] = new int[range];
        int output[] = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            count[arr[i] - min]++;
        }
        for (int i = 1; i < count.length; i++) {
            count[i] += count[i - 1];
        }
        for (int i = arr.length - 1; i >= 0; i--) {
            output[count[arr[i] - min] - 1] = arr[i];
            count[arr[i] - min]--;
        }
        for (int i = 0; i < arr.length; i++) {
            arr[i] = output[i];
        }
    }
}