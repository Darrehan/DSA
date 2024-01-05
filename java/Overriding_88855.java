// overriding practice example

class Car_0012 {
    public void start() {
        System.out.println("Car Started");
    }

    public void accelerate() {
        System.out.println("Car is Accelerated");
    }

    public void changeGear() {
        System.out.println("Car Gear Changed");
    }
    


}

class LuxaryCar extends Car_0012 {
    @Override
    public void changeGear() {
        System.out.println("Automatic Gear");
    }

    public void openRoof() {
        System.out.println("Sun Roof is Opened");
    }

}

public class Overriding_88855 {

    public static void main(String[] args) {
        Car_0012 c = new LuxaryCar();//Dynamic method dispatch only those methods are called which are present in super class
        c.start();
        c.accelerate();
        c.changeGear();
        //c.openRoof();
        Car_0012 c1 = new Car_0012();
        c1.start();
        c1.accelerate();
        c1.changeGear();
        
    }

}