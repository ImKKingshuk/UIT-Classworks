// Java Program to Show Passing an Object as Method Argument

public class prog21 {
    public static void main(String[] args) {
        Student student = new Student("John", 21);
        displayStudentInfo(student);
    }

    public static void displayStudentInfo(Student student) {
        System.out.println("Student Name: " + student.getName());
        System.out.println("Student Age: " + student.getAge());
    }
}

class Student {
    private String name;
    private int age;

    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}
