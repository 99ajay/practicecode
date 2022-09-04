
//package JAVA.HashMap;
import java.util.HashMap;

class Main {
    public static void main(String args[]) {
        HashMap<String, Integer> hm = new HashMap<>();
        System.out.println(hm);
        // add an element

        hm.put("India", 100);
        hm.put("england", 89);
        hm.put("USA", 123);
        hm.put("UK", 34);

        // System.out.println(hm);

        // // update a value

        // hm.put("India", 567);
        // System.out.println(hm);

        // get key
        // System.out.println(hm.get("India"));
        // System.out.println(hm.get("india"));

        // // contains key

        // System.out.println(hm.containsKey("USA"));
        // System.out.println(hm.containsKey("usa"));

        // System.out.println(hm.remove("India") + " status -> " + hm);
        System.out.println(hm.keySet());

        for (String key : hm.keySet()) {
            System.out.println("key : " + key + " value : " + hm.get(key));
        }

    }
}
