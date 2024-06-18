// Java Program to Show the Use of Break

public class prog15 {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            if (i == 6) {
                System.out.println("Breaking the loop at i = " + i);
                break;  // Break the loop when i is 6
            }
            System.out.println("i = " + i);
        }
    }
}
