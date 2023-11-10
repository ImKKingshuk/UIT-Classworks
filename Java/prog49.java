

import java.util.ArrayList;
import java.util.EmptyStackException;
import java.util.List;

public class prog49<T> {
    private List<T> stack;

    public prog49() {
        stack = new ArrayList<>();
    }

    public void push(T item) {
        stack.add(item);
    }

    public T pop() {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        return stack.remove(stack.size() - 1);
    }

    public T peek() {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        return stack.get(stack.size() - 1);
    }

    public boolean isEmpty() {
        return stack.isEmpty();
    }

    public int size() {
        return stack.size();
    }

    public static void main(String[] args) {
        // Create a stack of integers
        prog49<Integer> intStack = new prog49<>();

        // Push some elements onto the stack
        intStack.push(10);
        intStack.push(20);
        intStack.push(30);

        // Pop elements from the stack and print them
        while (!intStack.isEmpty()) {
            System.out.println("Popped: " + intStack.pop());
        }

        // Create a stack of strings
        prog49<String> stringStack = new prog49<>();

        // Push some strings onto the stack
        stringStack.push("Hello");
        stringStack.push("World");

        // Pop strings from the stack and print them
        while (!stringStack.isEmpty()) {
            System.out.println("Popped: " + stringStack.pop());
        }
    }
}
