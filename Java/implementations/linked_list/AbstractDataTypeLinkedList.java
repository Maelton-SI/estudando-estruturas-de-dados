package linked_list;

import linked_list.singly_linked_list.Node;

public interface AbstractDataTypeLinkedList<T> {
    
    void addFirst(T element);
    void addLast(T element);
    void add(int index, T element);

    Node<T> removeFirst();
    Node<T> removeLast();
    Node<T> remove(T element);
    Node<T> remove(int index);

    boolean isEmpty();
    int size();
    void clear();

    boolean contains(T element);
    Node<T> search(int index);

    String toString();
}
