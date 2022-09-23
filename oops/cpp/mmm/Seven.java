import java.util.*;

public class Seven {
    static class Overload {
        public void dolt(int x) {
            System.out.println("i am A");
        }

        public void dolt(float x) {
            System.out.println("i am B");
        }

        public void dolt(int x, int y) {
            System.out.println("i am C");
        }
    }

    public static void main(String[] args) {
        Overload x = new Overload();
        x.dolt(3 / 2);// "i am A"
    }
}