import java.util.*;

public class Four {
    public static boolean xpro(int a) {
        return a == 2 * (a / 10 + a % 10);
    }

    public static void main(String[] args) {
         
        System.out.println(xpro(18));
        // output 18

    }
}