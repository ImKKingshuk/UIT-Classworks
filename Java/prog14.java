// Java Program to Show the Use of Switch-Case

public class prog14 {
    public static void main(String[] args) {
        char operator = '+';
        int operand1 = 10;
        int operand2 = 5;
        int result;

        switch (operator) {
            case '+':
                result = operand1 + operand2;
                System.out.println("Addition result: " + result);
                break;
            case '-':
                result = operand1 - operand2;
                System.out.println("Subtraction result: " + result);
                break;
            case '*':
                result = operand1 * operand2;
                System.out.println("Multiplication result: " + result);
                break;
            case '/':
                result = operand1 / operand2;
                System.out.println("Division result: " + result);
                break;
            default:
                System.out.println("Invalid operator");
        }
    }
}
