import java.util.*;

public class Linkedlistrevise {

    public static class Node {
        int data;
        Node next;
    }

    public static class Linkedlist {
        int size;
        Node head;
        Node tail;

        void insertend(int val) {
            Node node = new Node();
            node.data = val;
            if (this.size == 0) {
                this.head = node;
                this.tail = node;

            } else {
                this.tail.next = node;
                this.tail = node;

            }
            size++;

        }

        void display() {
            Node temp = head;
            while (temp != null) {
                System.out.println(temp.data + "->");
                temp = temp.next;
            }
        }
        void addat(int idx)
        {
            
        }
    }

    public static void main(String[] args) {
        Linkedlist ll = new Linkedlist();
        ll.insertend(45);
        ll.insertend(12);
        ll.insertend(67);
        ll.insertend(89);
        ll.insertend(90);
        ll.display();

    }
}
