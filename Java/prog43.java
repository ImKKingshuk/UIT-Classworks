//Wap in java to show that higher priority threads getting more CPU time than lower priority thread.
public class prog43 
{
    public static void main(String[] args) 
    {
        Thread highPriorityThread = new Thread(new MyRunnable(), "HighPriorityThread");
        Thread mediumPriorityThread = new Thread(new MyRunnable(), "MediumPriorityThread");
        Thread lowPriorityThread = new Thread(new MyRunnable(), "LowPriorityThread");
        highPriorityThread.setPriority(Thread.MAX_PRIORITY);
        mediumPriorityThread.setPriority(Thread.NORM_PRIORITY);
        lowPriorityThread.setPriority(Thread.MIN_PRIORITY);
        highPriorityThread.start();
        mediumPriorityThread.start();
        lowPriorityThread.start();
    }

    static class MyRunnable implements Runnable 
    {
        @Override
        public void run() 
        {
            for (int i = 0; i < 5; i++) 
            {
                System.out.println(Thread.currentThread().getName() + " is running iteration " + i);
                try 
                {
                    Thread.sleep(100);
                } 
                catch (InterruptedException e) 
                {
                    e.printStackTrace();
                }
            }
        }
    }
}