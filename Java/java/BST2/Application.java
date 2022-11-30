package Primary.java.BST2;

import java.util.*;

public class Application {
    public static void main(String[] args) {
        KhudBanaoPt2 bst = new KhudBanaoPt2();
        System.out.println("Part a)");
        System.out.println("Enter the number of values");
        Scanner sc = new Scanner(System.in);
        int n1 = s.nextInt();
        for (int i = 0; i < n1; i++) {
            System.out.println("Enter item number " + (i + 1));
            int x1 = s.nextInt();
            bst.insertNode(x1);
        }
        System.out.println("Part b)");
        System.out.println("Enter the number of values you want to delete: ");
        int n2 = s.nextInt();
        for (int j = 0; j < n2; j++) {
            System.out.println("Enter value to delete: ");
            int x2 = s.nextInt();
            bst.deleteNode(x2);
        }
        System.out.println("\nBinary Search Tree: ");
        bst.Display();

        System.out.println("Part c)");
        System.out.println("check if it is in the Binary Search Tree or not: ");
        int x3 = s.nextInt();
        boolean val = bst.find(x3);
        System.out.println("present in the BST ? " + val);

        System.out.println("Part d)");
        System.out.println("To check if the entered is a BST ");
        if (bst.isTree(bst.root))
            System.out.println("\nIt is a BST");
        else
            System.out.println("\nIt is not a BST");

        System.out.println("Part e)");
        System.out.println("\nInorder Traversal of BST: ");
        bst.inOrder_t();
    }
}

class KhudBanaoPt2 {
    static class Node {
        int data;
        Node Left, Right;

        public Node(int data) {
            this.data = data;
            Left = Right = null;
        }
    }

    Node root;

    KhudBanaoPt2() {
        root = null;
    }

    Node insertNode(Node root, int key) {
        if (root == null) {
            root = new Node(key);
            return root;
        }
        if (key < root.data)
            root.Left = insertNode(root.Left, key);
        else if (key > root.data)
            root.Right = insertNode(root.Right, key);
        return root;
    }

    void insertNode(int data) {
        root = insertNode(root, data);
    }

    Node delete(Node root, int key) {
        if (root == null)
            return null;

        if (key < root.data)
            root.Left = delete(root.Left, key);
        else if (key > root.data)
            root.Right = delete(root.Right, key);
        else {
            if (root.Left == null)
                return root.Right;
            else if (root.Right == null)
                return root.Left;
            root.data = minValue(root.Right);

            root.Right = delete(root.Right, root.data);
        }
        return root;
    }

    int minValue(Node root) {
        int min = root.data;
        while (root.Left != null) {
            min = root.Left.data;
            root = root.Left;
        }
        return min;
    }

    void deleteNode(int data) {
        root = delete(root, data);
    }

    Node search_Recursive(Node root, int key) {
        if (root == null || root.data == key)
            return root;
        if (root.data > key)
            return search_Recursive(root.Left, key);
        return search_Recursive(root.Right, key);
    }

    boolean find(int key) {
        root = search_Recursive(root, key);
        return root != null;
    }

    boolean isTree(Node node) {
        if (node == null)
            return true;
        if (node.Left != null && node.Left.data > node.data)
            return false;
        if (node.Right != null && node.Right.data < node.data)
            return false;
        return isTree(node.Left) && isTree(node.Right);
    }

    void inOrder(Node node) {
        if (node == null)
            return;
        inOrder(node.Left);
        System.out.print(node.data);
        inOrder(node.Right);
    }

    void inOrder_t() {
        inOrder(root);
    }

    void Disp(Node root) {
        if (root != null) {
            Disp(root.Left);
            System.out.print(root.data);
            Disp(root.Right);
        }
    }

    void Display() {
        Disp(root);
    }
}
