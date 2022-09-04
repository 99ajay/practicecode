import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        HashMap<Character, Integer> hm = new HashMap<>();
        for (int idx = 0; idx < str.length(); idx++) {
            char ch = str.charAt(idx);
            if (hm.containsKey(ch)) {
                hm.put(ch, hm.get(ch) + 1); // update
            } else {
                hm.put(ch, 1); // add
            }
        }
        int max = 0;
        char ch = ' ';
        for (Character x : hm.keySet()) {
            if (hm.get(x) > max) {
                max = hm.get(x);
                ch = x;
            }
        }
        System.out.println(ch);

    }

}