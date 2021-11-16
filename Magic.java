public class Magic {
    public static void main (String[] args) {
        int myNumber = 42069;  //original number
        int magicNumber = myNumber*myNumber;
        magicNumber+=myNumber;
        magicNumber /= myNumber;
        magicNumber+=17;
        magicNumber -= myNumber;
        magicNumber /= 6;
        System.out.println(magicNumber);
    }
}