// Java Program to Show Dynamic Method Dispatch

class ParentClass {
    void display() {
        System.out.println("Parent class method");
    }
}

class ChildClass1 extends ParentClass {
    void display() {
        System.out.println("Child class 1 method");
    }
}

class ChildClass2 extends ParentClass {
    void display() {
        System.out.println("Child class 2 method");
    }
}

public class prog31 {
    public static void main(String[] args) {
        ParentClass obj1 = new ChildClass1();
        ParentClass obj2 = new ChildClass2();

        obj1.display();
        obj2.display();
    }
}
