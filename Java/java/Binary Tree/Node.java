package Primary.java;

public class Node {
    private int data;
    private Node leftChild;
    private Node rightChild;

    Node(int data){
        this.data=data;
    }

    public void insert(int value ){
        if(value==data)
        return ;

        if(value<data){
            if(leftChild==null)
              leftChild=new Node(value);

            else leftChild.insert(value);
        }

        else {
            if(rightChild==null)
            rightChild= new Node(value);

            else rightChild.insert(value);
        }
    }

    public void traverseInorder(){
        if(leftChild!=null)
        leftChild.traverseInorder();
        System.out.print(data+"  |  ");

        if(rightChild!=null)
        rightChild.traverseInorder();
    }

    public void traversePreorder(){
        if(leftChild!=null)
        leftChild.traversePreorder();
        System.out.print(data+"  |  ");

        if(rightChild!=null)
        rightChild.traversePreorder();
    }

    public void traversePostorder(){
        if(leftChild!=null)
        leftChild.traversePostorder();

        if(rightChild!=null)
        rightChild.traversePostorder();
        System.out.print(data+"  |  ");
    }

    public int getData(){
        return data;
    }

    public void setData(int data){
        this.data=data;
    }

    public Node getRightChild(){
        return rightChild;
    }

    public Node getLeftChild(){
        return leftChild;
    }

    public void setLeftChild(Node leftChild){
        this.leftChild=leftChild;
    }

    public void setRightChild(Node leftChild){
        this.rightChild= rightChild;
    }
   
}
