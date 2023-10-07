// Java Program to Show the Use of Access Specifiers

public class prog25 {
    public int publicVariable = 10;
    private int privateVariable = 20;
    protected int protectedVariable = 30;
    int defaultVariable = 40;

    public void publicMethod() {
        System.out.println("Public Method");
    }

    private void privateMethod() {
        System.out.println("Private Method");
    }

    protected void protectedMethod() {
        System.out.println("Protected Method");
    }

    void defaultMethod() {
        System.out.println("Default Method");
    }
}
