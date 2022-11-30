
import java.util.*;
interface Queue{
void enqueue(Object data);
Object dequeue();
Object getFirstElement();
Object getLastElement();
boolean isEmpty();
String display();
int getSize();
int Search(Object data);
}
class ArrayList{
Object[] elements;
int size;
//Constructors
ArrayList(){
elements = new Object[10];
size = 10;
}
ArrayList(int size){
if(size<0)
throw new IllegalArgumentException("initialCapacity must be >= 1");
this.size = size;
elements = new Object[size];
}
public void add(int index, Object elementToAdd){
Object[] newArr = new Object[elements.length + 1];
if(index>elements.length || index<0)
throw new IllegalArgumentException("index invalid");
else {
for(int i = 0 ; i <= elements.length ; i++)
if(i<index) newArr[i] = elements[i];
else if(i==index) newArr[i] = elementToAdd;
else newArr[i] = elements[i-1];elements = newArr;
size++;
}
}
public void set(int index,Object elementToSet){
if(index>=elements.length || index<0)
throw new IllegalArgumentException("index invalid");
else elements[index] = elementToSet;
}
public void remove(int index){
Object[] newArr = new Object[elements.length - 1];
if(index>=elements.length || index<0)
throw new IllegalArgumentException("index invalid");
else {
for(int i = 0 ; i < elements.length ; i++)
if(i<index) newArr[i] = elements[i];
else if(i==index);
else newArr[i-1] = elements[i];
elements = newArr;
size--;
}
}
public Object get(int index){
if(index>=elements.length || index<0)
throw new IllegalArgumentException("index invalid");
else return elements[index];
}
public int indexOf(Object indexToBeFound){
int index = -1;
for(int i = 0 ; i < size ; i++)
if(elements[i].equals(indexToBeFound))
index = i;
return index;
}
public int getSize(){
return this.size;
}
public boolean isEmpty(){
return size==0;
}
public String toString(){
String str = "[";
for(int i = 0 ; i < size ; i++)if(elements[i] != null){
str= str + elements[i] + " ";
}
str = str + "]";
return str;
}
}
class QueueAL extends ArrayList implements Queue{
private int capacity;
private int front=0;
private int rear=0;
QueueAL(int length){
super(length);
this.capacity = length;
}
QueueAL(){
this(10);
}
public void enqueue(Object data){
if(rear==capacity){
add(rear,data);
}
else set(rear,data);
rear++;
}
public Object dequeue(){
Object data = null;
if(!isEmpty()){
data = elements[front];
elements[front]=null;
}
front++;
return data;
}
public Object getFirstElement(){
return elements[front];
}
public Object getLastElement(){
return elements[rear-1];
}
public boolean isEmpty(){
return front==rear;
}public String display(){
return toString();
}
public int getSize(){
return rear - front;
}
public int Search(Object data){
return indexOf(data);
}
}
public class d
{
public static void main(String[] args) {
Scanner scan = new Scanner(System.in);
System.out.println("Enter size or -1 for default");
int size = scan.nextInt();
QueueAL queueArrayList = null;
if(size>0)
queueArrayList = new QueueAL(size);
else if(size==-1)
queueArrayList = new QueueAL();
else
System.out.println("Invalid size for List");
System.out.println("Enter elements");
for(int i = 0 ; i < size ; i++){
queueArrayList.enqueue(scan.next());
}
System.out.println(queueArrayList.display());
System.out.println(queueArrayList.getLastElement() + " = Lastelement " + queueArrayList.getFirstElement() + " = First element" +"\nWith Size = " + queueArrayList.getSize() + "\nEnter what element toadd");
queueArrayList.enqueue(scan.next());
System.out.println(queueArrayList.display());
System.out.println(queueArrayList.getLastElement() + " = Lastelement " + queueArrayList.getFirstElement() + " = First element" +"\nWith Size = " + queueArrayList.getSize());
System.out.print("index of 12 = "+queueArrayList.Search(12));
System.out.println("Is your Queue empty ? : " +queueArrayList.isEmpty() + "\nDequeuing all elements : ");
System.out.print(queueArrayList.dequeue() + " ");
System.out.println("\nIs your Stack empty ? : " +queueArrayList.isEmpty());
}
}
