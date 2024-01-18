package stack;

public interface AbstractDataTypeStack<T> {

    boolean isFull();
    boolean isEmpty();
    void push(T element);
    T pop();
    T peek();
}
