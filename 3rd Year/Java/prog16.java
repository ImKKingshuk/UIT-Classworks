// Java Program to Show the Use of Continue

public class prog16{
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            if (i % 2 == 0) {
                continue;  // Skip even numbers
            }
            System.out.println("Odd number: " + i);
        }
    }
}
