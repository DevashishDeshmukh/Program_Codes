package Primary.java;
import java.util.Scanner;


public class Application {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       BinaryTree Tree= new BinaryTree();

       System.out.print("Enter number elements to insert in Binary Tree : ");
       int t= sc.nextInt();
       System.out.println("Enter elements : ");


       for (int i = 0; i < t; i++) {
           Tree.insert(sc.nextInt());
       }

       System.out.println("\nInorder traversal of Binary Tree : ");
       Tree.traverseInorder();

       System.out.println("\n\nPreorder traversal of Binary Tree : ");
       Tree.traversePreorder();

       System.out.println("\n\nPostorder traversal of Binary Tree : ");
       Tree.traversePostorder();

    }
}
