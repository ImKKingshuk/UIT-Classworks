package prog34;

public class prog34 implements MyInterface {
    @Override
    public void displayMessage() {
        System.out.println("This is the implementation of MyInterface in MyClass.");
    }

    public static void main(String[] args) {
        prog34 myClass = new prog34();
        myClass.displayMessage();
    }
}