// Java Program to Show the Use of Labelled Continue

public class prog18 {
    public static void main(String[] args) {
        outerLoop: // Label for the outer loop
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                if (i == 2 && j == 2) {
                    continue outerLoop; // Continues the outer loop
                }
                System.out.println("i = " + i + ", j = " + j);
            }
        }
    }
}
