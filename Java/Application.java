
import java.util.*;
public class Application
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the array size you want initially : ");
        int s = input.nextInt();
        String[] Array = new String[s];
        ArrayList<String[], Integer>  supercars = new ArrayList(s);
        for(int i = 0; i < s; i++){
            int a=i+1;
            System.out.print("Enter the  element No. "+a+" of array : ");
            String value = input.next();
            Array[i] = value;
        }

        System.out.println("Array given by you  : ");
        for(int i = 0; i < s; i++){
            System.out.println(Array[i]);
        }

        System.out.println("Size of the initial array : " + supercars.getSize());
        System.out.print("Enter the element you want to add to the array : ");
        String element_input = input.next();
        System.out.println("New array : ");
        supercars.array(Array, element_input);
        System.out.println("Size of the new array : " + supercars.getSize());
        System.out.print("Enter the index of element you want to print from array : ");
        int element_index = input.nextInt();
        System.out.println("The element at index " + element_index + " in array  : " +supercars.getIndex(element_index));
        System.out.println("Check if array is empty (empty means 'array size is zero')   : " + supercars.isEmpty());
        System.out.print("Enter a data whose index you want in array : ");
        String index_input = input.next();
        System.out.println("Index of the element (-1 means given data is not there in array) : " + supercars.indexOf(index_input));
        System.out.println("Conversion to a string : " + supercars.toString());
        System.out.print("Enter an index of element you want to remove from the array : ");
        int remove_index = input.nextInt();
        System.out.println(supercars.remove(remove_index));
    }
}
