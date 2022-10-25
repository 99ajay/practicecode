import java.util.ArrayList;
import java.util.Stack;

public class Maximum {
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
                Node par = st.peek();
                Node node = new Node(val);
                par.children.add(node);
                st.push(node);
            }
            idx++;
        }
        return root;
    }

    public static int maximum(Node root) {
        int res = Integer.MIN_VALUE;
        for (Node child : root.children) {
            res = Math.max(res, maximum(child));
        }
        return Math.max(res, root.data);

    }

    public static void main(String[] args) {
        Integer[] arr = { 10, 20, 50, null, 60, null, null, 30, 70, 90, null, 100, null, 110, null, null, null, 40, 80,
                null, null, null };
        Node root = construct(arr);
        System.out.println(maximum(root));
    }

}
