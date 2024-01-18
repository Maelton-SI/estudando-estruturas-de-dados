package stack;

public interface AbstractDataTypeStack<T> {

    boolean isEmpty();
    boolean isFull();
    void push(T elemento);
    T pop();
    T peek();
}
