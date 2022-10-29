import java.util.ArrayList;
import java.util.Scanner;

public class Printallpath {
    public static class Pair {
        int src, nbr;

        Pair(int src, int nbr) {
            this.src = src;
            this.nbr = nbr;
        }
    }

    public static void Printallpath(ArrayList<Pair>[] graph, int vtx, int dest, boolean vis[], String psf) {
        if (vtx == dest) {
            System.out.println(psf);
            return;

        }
        vis[vtx] = true;
        for (Pair e : graph[vtx]) {
            if (vis[e.nbr] == false) {
                Printallpath(graph, e.nbr, dest, vis, psf + e.nbr);
            }
        }
        vis[vtx] = false;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int nvtces = scn.nextInt();
        ArrayList<Pair>[] graph = new ArrayList[nvtces];
        for (int i = 0; i < nvtces; i++) {
            graph[i] = new ArrayList<>();
        }
        int nedges = scn.nextInt();
        for (int i = 0; i < nedges; i++) {
            int v1 = scn.nextInt();
            int v2 = scn.nextInt();
            graph[v1].add(new Pair(v1, v2));
            graph[v2].add(new Pair(v2, v1));
        }
        int source = scn.nextInt();
        int desti = scn.nextInt();
        Printallpath(graph, source, desti, new boolean[nvtces], "" + source);

    }
}
