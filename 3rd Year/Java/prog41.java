// java  programme to show the use of throws.
public class prog41 {
    public static void main(String[] args) {
        try {
            doSomething();
        } catch (Exception e) {
            System.out.println("Caught Exception: " + e.getMessage());
        }
    }

    private static void doSomething() throws Exception {
        throw new Exception("An exception occurred.");
    }
}
