import java.util.*;

public class Four {
    public static boolean xpro(int a) {
        return a == 2 * (a / 10 + a % 10);
    }

    public static void main(String[] args) {
        // Scanner scn = new Scanner(System.in);

        // int n = scn.nextInt();
        // for (int row = 1; row <= n; row++) {
        // for (int col = 1; col <= n; col++) {
        // if (row == col || row + col == (n + 1)) {
        // System.out.print("*\t");
        // } else {
        // System.out.print(" \t");
        // }
        // }
        // System.out.println();
        // }
        System.out.println(xpro(18));
        // output 18

    }
}