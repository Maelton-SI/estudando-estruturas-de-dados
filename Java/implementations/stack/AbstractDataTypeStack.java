package stack;

public interface AbstractDataTypeStack {

    boolean isEmpty();
    boolean isFull();
    void push(Object element);
    Object pop();
    Object peek();
}
