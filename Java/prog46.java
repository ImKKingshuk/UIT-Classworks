// Show that when you are calculating the summation of numbers by two threads (assignment no 42) the time requirement is less than the time requirement by a single threaded program for doing the same task.

class prog46  {
    private static int N = 1000;
    private static int sumParent = 0;
    private static int sumChild = 0;

    public static void main(String[] args) {
        for (int i = 1; i <= N; i += 2) {
            sumParent += i;
        }

        Thread childThread = new Thread(() -> {
            for (int i = 2; i <= N; i += 2) {
                sumChild += i;
            }
        });

        childThread.start();

        try {
            childThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        int totalSum = sumParent + sumChild;
        System.out.println("Sum of odd numbers (Parent Thread): " + sumParent);
        System.out.println("Sum of even numbers (Child Thread): " + sumChild);
        System.out.println("Total Sum: " + totalSum);
    }
}
