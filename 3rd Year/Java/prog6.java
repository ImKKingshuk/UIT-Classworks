// Java Program to Show Scope of an Identifier

public class prog6 {
    private static int outerVariable = 10;

    public static void main(String[] args) {
        int innerVariable = 5;

        System.out.println("Outer variable: " + outerVariable);
        System.out.println("Inner variable: " + innerVariable);

        // Attempting to access an outer scope variable from inner scope
        // This will not compile because innerVariable is not accessible outside its scope
         System.out.println("Trying to access inner variable outside its scope: " + innerVariable);
    }
}
