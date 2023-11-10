java to show the use of ArithmaticException.
public class prog37 {
    public static void main(String[] args) {
        int dividend = 10;
        int divisor = 0;

        try {
            int result = dividend / divisor;
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.err.println("An ArithmeticException occurred: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
