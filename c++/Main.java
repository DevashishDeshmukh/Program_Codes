import java.util.*;


class LinkedList {
    Node HeadNode;
    int length =0;
    class Node{
        Object data;
        Node next;

        Node( Object element ){
            this.data= element;
            this.next= null;
        }
    }

    // Method used to add the elements to the list
    public void add(Object e){
        Node newNode= new Node(e);
        if(HeadNode== null)
            HeadNode = newNode;

        else {
            Node last;
            for (last = HeadNode; last.next != null; last = last.next);
            last.next =newNode;
        }
        length++;
    }

    // Method used to print the list
    public void printLinkedList(){
        Node ref  = HeadNode;
        System.out.print("[");
        System.out.print(ref.data);
        ref= ref.next;
        for (int i=1; i< length; i++){
            System.out.print(", "+ref.data);
            ref= ref.next;
        }
        System.out.println(" ]");
    }

    // Method used to remove specific element from the list
    public void remove(int index){
        checkIndex(index);
        if (index==0){
            HeadNode = nodeAtIndex(1);
        }
        else {
            Node temp=nodeAtIndex(index -1); //temp is node just before node to removed
            temp.next = (temp.next).next;
        }
        this.length--;
    }

    // Method used to add the element at particular index in the list
    public void insertAtindex(int index, Object element ){
        checkIndex(index);
        if(index ==0){
            Node newNode= new Node(element);
            newNode.next=HeadNode;
            HeadNode=newNode;
        }
        else {
            Node newNode = new Node(element);
            Node temp = nodeAtIndex(index - 1);
            newNode.next = temp.next;
            temp.next = newNode;
        }
        length++;
    }

    // Method used to find the element at particular index in the list
    public Object get( int index){
        checkIndex(index);
        Node n= nodeAtIndex(index);
        return n.data;
    }

    // Method used to find the index of particular element in the list
    public int indexOf( Object obj){
        int ind=-1;
        Node iterator = HeadNode;
        for (int i = 0; i < length; i++) {
            if(iterator.data.equals(obj)) {
                ind =i;
                break;
            }
            iterator=iterator.next;
        }
        return ind;
    }

    // Method used to check if the list is empty or not
    public boolean isEmpty(){
        if(length==0)
            return true;
        else
            return false;
    }

    // Method used to check if given index is valid or not
    public void checkIndex( int index){
        if(index>= length || index<0 ){
            throw new IndexOutOfBoundsException("invalid index");
        }
    }

    // Method used to get the node at the particular index in the li7st
    public Node nodeAtIndex(int index){
        Node nodeIndex = HeadNode;
        for (int i = 0; i < index; i++) {
            nodeIndex=nodeIndex.next;
        }
        return nodeIndex;
    }
}

public class Main {

    public static void main(String[] args) {

        LinkedList  ll = new LinkedList ();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of elements initially you want in a list : ");
        int nosOfElements = sc.nextInt();
        sc.nextLine();
        System.out.println("Enter the elements of list:");
        for(int i = 0 ; i < nosOfElements ; i++){
            ll.add(sc.nextLine());
        }
        System.out.print("List given by you = ");
        ll.printLinkedList();
        System.out.print("Enter element to find its index : ");
        Object obj = sc.nextLine();
        System.out.println("Index Of element " + obj+ " : " + ll.indexOf(obj));
        System.out.print("Enter the index to get element at that index: ");
        int index = sc.nextInt();
        sc.nextLine();
        System.out.println("Element at index " + index + " : " + ll.get(index));
        System.out.print("Enter index of element to be removed from list : " );
        ll.remove(sc.nextInt());
        sc.nextLine();
        Scanner A = new Scanner(System.in);
        System.out.print("List after removal : ");
        ll.printLinkedList();
        System.out.print("Enter the index and element to be inserted at that index:" );
        ll.insertAtindex(sc.nextInt(),sc.nextLine());
        System.out.print("List after inserting new element :");
        ll.printLinkedList();
        System.out.println("Is List empty ? ==> "+ll.isEmpty());
    }
}
