java programme to show the use of nested try statement.
public class prog39 {
    public static void main(String[] args) {
        try {
          
            int[] numbers = {1, 2, 3};

            try {
               
                int result = numbers[3]; 
                System.out.println("Result: " + result); 
            } catch (ArrayIndexOutOfBoundsException e) {
                System.err.println("Inner catch: An ArrayIndexOutOfBoundsException occurred: " + e.getMessage());
            }

            System.out.println("This line is still executed.");
        } catch (Exception e) {
            System.err.println("Outer catch: A generic Exception occurred: " + e.getMessage());
        }
    }
}
