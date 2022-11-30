package Primary.java;

public class BinaryTree {
    private Node root;

    public void insert(int value){
        if(root==null){
            root = new Node(value);
        }

        else  root.insert(value);
    }

    public void traverseInorder(){
        if(root!=null)
        root.traverseInorder();    
    }

    public void traversePreorder(){
        if(root!=null)
        root.traversePreorder();    
    }
    
    public void traversePostorder(){
        if(root!=null)
        root.traversePostorder();    
    }
}