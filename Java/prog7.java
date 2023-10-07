// Java Program for Narrowing Conversion

public class prog7 {
    public static void main(String[] args) {
        double doubleValue = 123.45;
        int intValue = (int) doubleValue;

        System.out.println("Double to Integer: " + intValue);

        int intValue2 = 1000;
        byte byteValue = (byte) intValue2;

        System.out.println("Integer to Byte: " + byteValue);
    }
}
