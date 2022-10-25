import java.util.*;

public class A {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String str = sc.next();

        int harryCuts = sc.nextInt(), potterCuts = sc.nextInt();

        int iterations = 0;

        String afterCuts = str;

        while (true) {

            iterations++;

            if (shiftString(afterCuts, harryCuts + potterCuts).equals(str)) {

                iterations++;

                break;

            }

            else if (shiftString(afterCuts, harryCuts).equals(str)) {

                break;

            } else if (shiftString(afterCuts, potterCuts).equals(str)) {

                break;

            }

            afterCuts = shiftString(afterCuts, harryCuts + potterCuts);

            iterations++;

        }

        System.out.println(iterations);

    }

    public static String shiftString(String str, int shiftCount) {

        String result;

        result = str.substring(str.length() - shiftCount, str.length()) + str.substring(0, str.length() - shiftCount);

        return result;

    }

}