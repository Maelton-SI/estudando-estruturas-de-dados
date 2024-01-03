import stack.AbstractDataTypeStack;
import stack.StaticStackWithArray;

public class DataStructuresManager {

    public static void main(String[] args) {

        AbstractDataTypeStack myStack = new StaticStackWithArray(10);

        myStack.push(2024);
        System.out.println(myStack.peek());
    }
}