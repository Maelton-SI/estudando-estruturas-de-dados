import stack.AbstractDataTypeStack;
import stack.DynamicStackWithArray;

public class DataStructuresManager {

    public static void main(String[] args) {

        AbstractDataTypeStack<Object> myStack = new DynamicStackWithArray<Object>();

        for(short n = 1; n < 1001; n++) myStack.push(n);

        System.out.println(myStack.peek());

    }
}