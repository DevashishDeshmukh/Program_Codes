package Primary.java.Binary;

public class Node {
    Node left, right;
    int data;

    Node(int data) {
        this.data = data;
        right = left = null;
    }
}