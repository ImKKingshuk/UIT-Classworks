// Java Program to Show Left and Right Shift Operations

public class prog9 {
    public static void main(String[] args) {
        int number = 10;

        // Left shift operation
        int leftShiftedNumber = number << 1; // equivalent to number * 2
        System.out.println("Left shifted by 1: " + leftShiftedNumber);

        // Right shift operation
        int rightShiftedNumber = number >> 1; // equivalent to number / 2
        System.out.println("Right shifted by 1: " + rightShiftedNumber);
    }
}
