import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Queue;
import java.util.Stack;

public class LevelorderGT {
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
        Node root = new Node(arr[0]);
        st.push(root);
        int idx = 1;
        while (idx < arr.length) {
            Integer val = arr[idx];
            if (val == null) {
                st.pop();
            } else {
                Node node = new Node(arr[idx]);
                Node par = st.peek();
                par.children.add(node);
                st.push(node);
            }
            idx++;
        }
        return root;
    }

    public static void levelorder(Node root) {
        Queue<Node> queue = new ArrayDeque<>();
        queue.add(root);
        while (queue.size() > 0) {
            Node rem = queue.remove();
            System.out.print(rem.data + " ");
            for (Node child : rem.children) {
                queue.add(child);
            }
        }
        System.out.print(".");
    }

    public static void main(String[] args) {
        Integer arr[] = { 10, 20, 50, null, 60, null, null, 30, 70, 90, null, 100, null, 110, null, null, null, 40, 80,
                null, null, null };
        Node root = construct(arr);
        levelorder(root);

    }
}
