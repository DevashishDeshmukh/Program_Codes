package Primary.java.Binary;

public class BST {
    Node root = null;

    void insert(int data) {
        root = insert(root, data);
    }

    Node insert(Node root, int data) {
        if (root == null) {
            root = new Node(data);
            return root;
        }
        if (data <= root.data) {
            root.left = insert(root.left, data);
        } else if (data > root.data) {
            root.right = insert(root.right, data);
        }
        return root;
    }

    boolean Search(Node root, int num) {
        while (root != null) {
            if (num > root.data)
                root = root.right;
            else if (num < root.data)
                root = root.left;
            else
                return true;
        }
        return false;
    }

    int minVal(Node root) {
        int min = root.data;
        while (root.left != null) {
            min = root.left.data;
            root = root.left;
        }
        return min;
    }

    void delete(int data) {
        root = delete(root, data);
    }

    Node delete(Node root, int data) {
        if (root == null)
            return root;
        if (data < root.data)
            root.left = delete(root.left, data);
        else if (data > root.data)
            root.right = delete(root.right, data);
        else {
            if (root.left == null)
                return root.right;
            else if (root.right == null)
                return root.left;
            root.data = minVal(root.right);
            root.right = delete(root.right, root.data);
        }
        return root;
    }

    void isBST() {
        System.out.println(isBST(root));
    }

    boolean isBST(Node node) {
        if (node == null)
            return true;

        if (node.left != null && node.left.data > node.data)
            return false;
        if (node.right != null && node.right.data < node.data)
            return false;
        if (!isBST(node.left) || !isBST(node.right))
            return false;

        return true;
    }

    void inorder() {
        inorder(root);
    }

    void inorder(Node root) {
        if (root != null) {
            inorder(root.left);
            System.out.print(root.data + " ");
            inorder(root.right);
        }
    }
}