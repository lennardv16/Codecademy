public class Calculator {
    public Calculator() {
    }

    //adds a and b
    public int add(int a, int b) {
        return a+b;
    }
    // subtracts a and b
    public int subtract(int a, int b) {
        return a-b;
    }
    //multiplies a and b
    public int multiply(int a, int b) {
        return a*b;
    }
    //divides a and b
    public int divide(int a, int b) {
        return a/b;
    }
    //modules a and b
    public int modulo(int a, int b) {
        return a%b;
    }
    public static void main(String[] args) {
        Calculator myCalculator = new Calculator();
        System.out.println(myCalculator.add(5,7));
        System.out.println(myCalculator.subtract(45,11));
    }
}