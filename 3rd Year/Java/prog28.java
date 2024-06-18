// Java Program to Show Inheritance

class Animal {
    void sound() {
        System.out.println("Animal is making a sound");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("Dog is barking");
    }
}

public class prog28{
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.sound();
    }
}
