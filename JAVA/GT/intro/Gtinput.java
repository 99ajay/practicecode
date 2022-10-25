import java.util.ArrayList;
import java.util.Stack;

public class Gtinput {
    public static class Node {
        int data;
        ArrayList<Node> children;

        Node(int data) {
            this.data = data;
            children = new ArrayList<>();
        }
    }

    public static Node construct(Integer[] arr) {
        Stack<Node> st = new Stack<>();
        Node t = new Node(arr[0]);
        st.push(t);
        int idx = 1;
        while (idx < arr.length) {
            Integer val = arr[idx];
            if (val == null) {
                st.pop();
            } else {
                Node par = st.peek();
                Node node = new Node(val);
                par.children.add(node);
                st.push(node);
            }
            idx++;

        }
        return t;

    }

    public static void display(Node root) {
        System.out.print(root.data + "->");
        for (Node child : root.children) {
            System.out.print(child.data + " ");
        }
        System.out.println(".");
        for (Node child : root.children) {
            display(child);
        }
    }

    public static void main(String[] args) {
        Integer arr[] = { 10, 20, 50, null, 60, null, null, 30, 70, 90, null, 100, null, 110, null, null, null, 40, 80,
                null, null, null };
        Node root = construct(arr);
        display(root);
    }
}