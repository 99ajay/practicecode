import java.util.ArrayList;
import java.util.Scanner;

public class Input {
    public static class Pair {
        int src;
        int dest;

        Pair(int src, int dest) {
            this.src = src;
            this.dest = dest;
        }

    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int nvtses = scn.nextInt();
        ArrayList<Pair>[] graph = new ArrayList[nvtses];
        for (int i = 0; i < nvtses; i++) {
            graph[i] = new ArrayList<>();
        }
        int nedges = scn.nextInt();
        for (int i = 1; i <= nedges; i++) {
            int v1 = scn.nextInt();
            int v2 = scn.nextInt();
            graph[v1].add(new Pair(v1, v2));
            graph[v2].add(new Pair(v2, v1));

        }

        for (ArrayList<Pair> list : graph) {
            for (Pair e : list) {
                System.out.println(e.src + "->" + e.dest);
            }
        }

    }
}
