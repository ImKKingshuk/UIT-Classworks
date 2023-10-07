public class prog40 {
    public static void main(String[] args) {
        try {
            throw new Throwable("This is a Throwable object");
        } catch (Throwable throwable) {
            System.err.println("Caught Throwable: " + throwable.getMessage());
        }
    }
}
