package stack.dynamic_stack;

import linked_list.singly_linked_list.SinglyLinkedList;
import stack.AbstractDataTypeStack;

public class DynamicStackWithSinglyLinkedList<T> implements AbstractDataTypeStack<T> {

    SinglyLinkedList<T> storage = new SinglyLinkedList<T>();

    @Override
    public boolean isFull() {
        return false;
    }

    @Override
    public boolean isEmpty() {
        return storage.isEmpty();
    }

    @Override
    public void push(T element) {
        storage.addFirst(element);
    }

    @Override
    public T pop() {
        return storage.removeFirst().getData();
    }

    @Override
    public T peek() {
        if( this.isEmpty() ) {
            return null;
        } else {
            return storage.search(0).getData();
        }
    }  
}
