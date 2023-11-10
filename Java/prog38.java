java programme to show the use of Multiple catch block
public class prog38 {
    public static void main(String[] args) {
        try {
            int[] numbers = {1, 2, 3};
            int result = numbers[3]; 
            System.out.println("Result: " + result); 
        } catch (ArrayIndexOutOfBoundsException e) {
            System.err.println("An ArrayIndexOutOfBoundsException occurred: " + e.getMessage());
        } catch (ArithmeticException e) {
            System.err.println("An ArithmeticException occurred: " + e.getMessage());
        } catch (Exception e) {
            System.err.println("A generic Exception occurred: " + e.getMessage());
        }
    }
}
