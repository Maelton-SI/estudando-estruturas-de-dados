package stack;

public class StaticStackWithArray implements AbstractDataTypeStack{
    
    private Object[] storage;
    private int storageCapacity;
    private int size;

    public boolean isFull() {
        return this.size == this.storageCapacity ? true : false;
    }

    public boolean isEmpty() {
        return this.size == 0 ? true : false;
    }

    public void push(Object element) {
        if( !this.isFull() ) {
            this.storage[this.size] = element;
            this.size++;
        }
    }

    public Object pop() {
        if(this.isEmpty()) {
            return null;
        } else {
            Object peekElement = this.storage[this.size-1];
            this.storage[this.size-1] = null;
            this.size--;
            return peekElement;
        }
    }

    public Object peek() {
        return this.isEmpty() ? null : this.storage[this.size-1];
    }

    public StaticStackWithArray(int storageCapacity) {
        this.storageCapacity = storageCapacity;
        this.storage = new Object[storageCapacity];
        this.size = 0;
    }
}