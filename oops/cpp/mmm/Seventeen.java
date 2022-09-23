import java.util.*;

public class Seventeen {
    static class A {
        public void dolt() {
            System.out.println("i am A");
        }
    }

    static class B extends A {
        public void dolt() {
            System.out.println("i am B");
        }
    }

    static class C extends B {
        public void dolt() {
            System.out.println("i am C");
        }
    }

    public static void main(String[] args) {
        A x = new B();
        x.dolt();/// i am B
    }
}