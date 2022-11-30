

class ArrayList<T, E>{

    int size;
    String[] newArray;

    public ArrayList (int size){
        this.size = size;
        this.newArray = new String[size];
    }

    public String remove(int index){
        checkIndex(index);
        String removedElement = newArray[index];
        for (int i = index + 1; i < size; i++){
            newArray[i - 1] = newArray[i];
        }
        size = size - 1;
        newArray[size] = null;
        System.out.println("New Array : ");
        for(int i = 0; i < size; i++){
            System.out.println(newArray[i]);
        }
        System.out.print("The removed element : ");
        return removedElement;
    }

    public int getSize(){
        return size;
    }

    public int indexOf(String value){
        for(int i = 0; i < newArray.length; i++){
            if(newArray[i].equals(value)){
                return i;
            }
        }
        return -1;
    }

    public void array(String[] Array, String data){
        for(int i = 0; i < size; i++){
            newArray[i] = Array[i];
        }
        if(size < newArray.length){
            size++;
            newArray[size] = data;
        }else{
            String[] newarray = new String[2 * size];
            for(int i = 0; i < newArray.length; i++){
                newarray[i] = newArray[i];
            }
            newArray = newarray;
            newArray[size] = data;
            size++;
        }
        for(int i = 0; i < size; i++){
            System.out.println(newArray[i]);
        }
    }

    public boolean isEmpty(){
        return size == 0;
    }
    
    public String getIndex(int index){
        checkIndex(index);
        return newArray[index];
    }

    public void checkIndex(int index){
        if(index < 0 || index >= newArray.length){
            throw new IndexOutOfBoundsException("Index = " + index + ". Size = " + newArray.length);
        }
    }

    public String toString(){
        StringBuffer string = new StringBuffer("[");
        for(int i = 0; i < size; i++){
            if(newArray[i] == null){
                string.append("null, ");
            }else{
                string.append(newArray[i].toString() + ",");
            }
        }
        if(newArray.length > 0){
            string.delete(string.length() - 1, string.length());
            string.append("]");
        }
        return new String(string);
    }

}
