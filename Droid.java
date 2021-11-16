public class Droid {
    int batteryLevel;
    String name;

    public Droid(String droidName) {
        name = droidName;
        batteryLevel  = 100;
    }

    public String toString() {
        return "Hello, I'm the droid: "+name;
    }

    public void performTask(String task) {
        System.out.println(name+ " is performing task: "+ task);
        batteryLevel-=10;
    }

    public static void main(String[] args) {
        Droid Cuh = new Droid("Cuh");
        Droid Ceh = new Droid("Ceh");
        System.out.println(Cuh);
        System.out.println(Ceh);
        Cuh.performTask("pooping");
        Ceh.performTask("eating");
    }
}