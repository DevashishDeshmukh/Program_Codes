package com.company;

public class OueueLL<E> {
    
    E data;
    Node<E> head, rear;
    
    public  Node(E data){
        this.data= element;
        next= null;
    }

    public void enqueue(E e){
        Node<E> toadd= new Node<>(e);
        if(head==null){
            head = rear = toadd;
        }

        else{
            rear.next = toadd;
            rear = rear.next;
        }
    }


    public E dequeue(){
        if(head== null){
            return null;
        }

        else{
             Node <E> temp = head;
             head=  head.next;
        }

        if(head == null){
            rear = null;
        }

        return temp.data;
    }
}



public class driver {
    public static void main(String[] args) {

        QueueLL <Integer> qll = new QueueLL<>();

        qll.enqueue(12);
        qll.enqueue(2548);
        qll.enqueue(545);

        System.out.println(qll.dequeue);



    }
}    

