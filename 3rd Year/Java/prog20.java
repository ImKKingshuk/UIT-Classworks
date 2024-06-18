// Java Program to Show Method Overloading

public class prog20 {
    public static void main(String[] args) {
        System.out.println("Sum of integers: " + sum(10, 20));
        System.out.println("Sum of doubles: " + sum(10.5, 20.7));
    }

    public static int sum(int a, int b) {
        return a + b;
    }

    public static double sum(double a, double b) {
        return a + b;
    }
}
