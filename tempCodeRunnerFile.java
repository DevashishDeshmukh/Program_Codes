import java.util.*;

abstract class credential {
    protected abstract void cashier_userName();

    protected abstract void cashier_password();
}

abstract class cashier extends credential {
    Scanner input = new Scanner(System.in);

    private void cashier_credentials() {
        System.out.print("Enter username: ");
        String userName = input.next();

        System.out.print("Enter password: ");
        int password = input.nextInt();

        if (userName == "Cashier" && password == 1111) {
            System.out.print("Login successful!!");
            // Screen Change
        } else {
            System.out.print("Login unsuccessful!!");
        }
    }
}

abstract class admin extends credential {
    Scanner input = new Scanner(System.in);

    private void admin_credentials() {
        System.out.print("Enter username: ");
        String userName = input.next();

        System.out.print("Enter password: ");
        int password = input.nextInt();

        if (userName == "Admin" && password == 9999) {
            System.out.print("Login successful!!");
            // Screen Change
        } else {
            System.out.print("Login unsuccessful!!");
        }
    }
}

public static void main(String[] args) {
    admin a = new admin();

    
}
