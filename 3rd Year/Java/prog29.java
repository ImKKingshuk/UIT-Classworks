// Java Program to Show the Use of super

class Parent {
    String name = "Parent";

    void display() {
        System.out.println("Name: " + name);
    }
}

class Child extends Parent {
    String name = "Child";

    void display() {
        super.display(); // Call the display method of the parent class
        System.out.println("Name: " + name);
    }
}

public class prog29 {
    public static void main(String[] args) {
        Child child = new Child();
        child.display();
    }
}
