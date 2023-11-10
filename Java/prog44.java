// java programme to implement producer-consumer problem.
import java.util.concurrent.ArrayBlockingQueue;
public class prog44 
{
    public static void main(String[] args) 
    {
        ArrayBlockingQueue<Integer> buffer = new ArrayBlockingQueue<>(10);
        Thread producerThread = new Thread(new Producer(buffer));
        Thread consumerThread = new Thread(new Consumer(buffer));
        producerThread.start();
        consumerThread.start();
    }
}

class Producer implements Runnable 
{
    private ArrayBlockingQueue<Integer> buffer;

    public Producer(ArrayBlockingQueue<Integer> buffer)
    {
        this.buffer = buffer;
    }

    @Override
    public void run() 
    {
        try 
        {
            for (int i = 1; i <= 10; i++) 
            {
                System.out.println("Producing: " + i);
                buffer.put(i);
                Thread.sleep(1000);
            }
        } 
        catch (InterruptedException e) 
        {
            Thread.currentThread().interrupt();
        }
    }
}

class Consumer implements Runnable 
{
    private ArrayBlockingQueue<Integer> buffer;

    public Consumer(ArrayBlockingQueue<Integer> buffer) 
    {
        this.buffer = buffer;
    }

    @Override
    public void run() 
    {
        try 
        {
            for (int i = 1; i <= 10; i++) 
            {
                int item = buffer.take();
                System.out.println("Consuming: " + item);
                Thread.sleep(1500); 
            }
        } 
        catch (InterruptedException e) 
        {
            Thread.currentThread().interrupt();
        }
    }
}