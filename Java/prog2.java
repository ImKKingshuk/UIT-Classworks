// Write a java programme which will add last 4 digits of your roll number and show the summation of it.

import java.util.Scanner;

public class prog2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter your roll number: ");
        int rollNumber = scanner.nextInt();
        
        int lastFourDigits = rollNumber % 10000;  // Extracting the last four digits
        int sum = 0;

        while (lastFourDigits > 0) {
            sum += lastFourDigits % 10;  // Adding the last digit
            lastFourDigits /= 10;  // Move to the next digit
        }

        System.out.println("Sum of the last four digits: " + sum);
    }
}
