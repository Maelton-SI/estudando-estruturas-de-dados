package stack;

public class StaticStackWithArray<T> implements AbstractDataTypeStack<T> {
    
    private Object[] storage;
    private int storageCapacity;
    private int size;

    public boolean isFull() {
        return this.size == this.storageCapacity ? true : false;
    }

    public boolean isEmpty() {
        return this.size == 0 ? true : false;
    }

    public void push(T element) {
        if( !this.isFull() ) {
            this.storage[this.size] = element;
            this.size++;
        }
    }

    @SuppressWarnings("unchecked")
    public T pop() {
        if(this.isEmpty()) {
            return null;
        } else {
            T peekElement = (T) this.storage[this.size-1];
            this.storage[this.size-1] = null;
            this.size--;
            return peekElement;
        }
    }

    @SuppressWarnings("unchecked")
    public T peek() {
        return this.isEmpty() ? null : (T) this.storage[this.size-1];
    }

    public StaticStackWithArray(int storageCapacity) {
        this.storageCapacity = storageCapacity;
        this.storage = new Object[storageCapacity];
        this.size = 0;
    }
}