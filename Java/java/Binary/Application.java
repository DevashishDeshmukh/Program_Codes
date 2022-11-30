package Primary.java.Binary;

import java.util.Scanner;

public class Application {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BST bstree = new BST();
        System.out.print("Enter number of values to insert:");
        int n = sc.nextInt();
        System.out.print("Enter values to insert :");
        for (int i = 0; i < n; i++) {
            bstree.insert(sc.nextInt());
        }
        System.out.print("Inorder : ");
        bstree.inorder();
        System.out.println();
        System.out.print("Is the given tree a Bst ? : ");
        bstree.isBST();
        System.out.print("Enter the element to search for in given Tree : ");
        int num = sc.nextInt();
        if (bstree.Search(bstree.root, num)) {
            System.out.println(num + " is present in given Tree");
        }

        else {
            System.out.println(num + " is not present in given Tree");
        }
        System.out.print("Enter the Element to be deleted : ");
        int toDelete = sc.nextInt();
        bstree.delete(toDelete);
        System.out.print("Inorder : ");
        bstree.inorder();
        System.out.println();
    }
}