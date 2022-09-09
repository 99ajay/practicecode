import java.util.Scanner;

import javax.lang.model.util.ElementScanner14;

public class Main {

    public static class Node {
        int data;
        Node next;
    }

    public static class LinkedList {
        Node head;
        Node tail;
        int size;

        void addlast(int val) {
            Node node = new Node();
            node.data = val;
            if (this.size == 0) {
                this.head = node;
                this.tail = node;
            } else {
                this.tail.next = node;
                this.tail = node;
            }
            this.size++;

        }

        void display() {
            Node ptr = this.head;
            while (ptr != null) {
                System.out.print(ptr.data + " ");
                ptr = ptr.next;
            }
        }

        void addfirst(int val) {
            Node node = new Node();
            node.data = val;
            if (this.size == 0) {
                this.tail = node;
                this.head = node;
            } else {
                node.next = this.head;
                this.head = node;
            }
            this.size++;
        }

        void removefirst() {
            if (this.size == 0) {
                System.out.println("linked list is empty");
            } else if (this.size == 1) {
                this.head = null;
                this.tail = null;
                this.size = 0;
            } else {
                Node nbr = this.head;
                this.head = nbr.next;
                nbr.next = null;
                this.size--;
            }

        }

        void removelast() {
            if (this.size == 0) {
                System.out.println("our linked list is empty");
            } else if (this.size == 1) {
                this.head = null;
                this.tail = null;
                this.size = 0;
            } else {
                Node ptr = this.head;
                while (ptr.next != this.tail) {
                    ptr = ptr.next;
                }
                ptr.next = null;
                this.tail = ptr;
                this.size--;
            }

        }

        int getfirst() {
            if (this.size == 0) {
                System.out.println("linked is empty");
                return -1;
            } else {
                return this.head.data;
            }
        }

        int getlast() {
            if (this.size == 0) {
                System.out.println("our linked list is empty");
                return -1;
            } else {
                return this.tail.data;
            }
        }

        int getat(int idx) {

        }

        void removeat(int idx) {

        }

        void addat(int idx) {

        }
    }

    public static void main(String[] args) {

        LinkedList ll = new LinkedList();
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
            ll.addfirst(arr[i]);
        }

        // ll.removelast();
        // ll.addlast(89);
        // ll.addlast(56);
        // ll.addlast(23);
        // ll.addlast(90);
        // ll.addlast(34);
        // ll.addlast(12);
        System.out.println("OUR LINKEDLIST ARE");
        // ll.display();

        System.out.println("last element of the linkedlist is :" + ll.getlast());
        System.out.println("first element in th elinkedlist is :" + ll.getfirst());

    }
}