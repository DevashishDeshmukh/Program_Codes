package Lab1;
import java.util.Scanner;


public class gcd {
    public static void main(String[] args) {
        int gcd = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number = ");
        int m = sc.nextInt();
        System.out.print("Enter second number = ");
        int n = sc.nextInt();
        int large;
        if (m > n) {
        large = m;
        } else {
        large = n;
        }
        for(int i = 1; i < large; ++i) {
        if (m % i == 0 && n % i == 0) {
        gcd = i;
        }
        }
        System.out.println("GCD = " + gcd);
        }
       
    
}
