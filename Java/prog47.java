// java which will take input from the command prompt and show that on screen.
import java.util.Scanner;

public class prog47 {
    public static void main(String[] args) {
     
        Scanner scanner = new Scanner(System.in);

      
        System.out.print("Enter something: ");

    
        String userInput = scanner.nextLine();

      
        System.out.println("You entered: " + userInput);

      
        scanner.close();
    }
}
