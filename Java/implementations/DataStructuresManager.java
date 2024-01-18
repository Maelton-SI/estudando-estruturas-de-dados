import stack.AbstractDataTypeStack;
import stack.StaticStackWithArray;

public class DataStructuresManager {

    public static void main(String[] args) {

        AbstractDataTypeStack<Object> myStack = new StaticStackWithArray<Object>(10);

        myStack.push(2024);
        myStack.push("Felpa");
        System.out.print(myStack.peek());
    }
}