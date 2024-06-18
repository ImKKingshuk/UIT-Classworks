package prog35;
public class prog35 implements Interface1, Interface2 {
    @Override
    public void method1() {
        System.out.println("Implementation of method1 from Interface1");
    }

    @Override
    public void method2() {
        System.out.println("Implementation of method2 from Interface2");
    }

    public static void main(String[] args) {
        prog35 prog35 = new prog35();
        prog35.method1();
        prog35.method2();
    }
}
