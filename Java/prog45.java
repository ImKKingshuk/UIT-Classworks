// java programme to show Deadlock.

public class prog45 
{
    public static Object resource1 = new Object();
    public static Object resource2 = new Object();

    public static void main(String[] args) 
    {
        Thread thread1 = new Thread(() -> 
        {
            synchronized (resource1) 
            {
                System.out.println("Thread 1: Holding resource 1...");
                try 
                { 
                    Thread.sleep(100); 
                }
                catch (InterruptedException e) {}
                System.out.println("Thread 1: Waiting for resource 2...");
                synchronized (resource2) 
                {
                    System.out.println("Thread 1: Acquired resource 2!");
                }
            }
        });
        Thread thread2 = new Thread(() -> 
        {
            synchronized (resource2) 
            {
                System.out.println("Thread 2: Holding resource 2...");
                try 
                { 
                    Thread.sleep(100); 
                }
                catch (InterruptedException e) {}
                System.out.println("Thread 2: Waiting for resource 1...");
                synchronized (resource1) 
                {
                    System.out.println("Thread 2: Acquired resource 1!");
                }
            }
        });
        thread1.start();
        thread2.start();
        try 
        {
            thread1.join();
            thread2.join();
        }
         catch (InterruptedException e) 
        {
            e.printStackTrace();
        }
    }
}