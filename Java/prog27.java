// Java Program to Show the Use of Static Variable

public class prog27 {
    static int staticVariable = 10;

    public static void main(String[] args) {
        System.out.println("Static variable: " + staticVariable);

        // Modifying static variable
        staticVariable = 20;

        System.out.println("Modified static variable: " + staticVariable);
    }
}
