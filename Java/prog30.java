// Java Program to Show Method Overriding

class ParentClass {
    void display() {
        System.out.println("Parent class method");
    }
}

class ChildClass extends ParentClass {
    void display() {
        System.out.println("Child class method");
    }
}

public class prog30 {
    public static void main(String[] args) {
        ChildClass child = new ChildClass();
        child.display();
    }
}
