// Practicing the inheritance 

class Circle_7777 {
    public double radius;

    public double area() {
        return Math.PI * radius * radius;
    }

    public double perimeter() {
        return 2 * Math.PI * radius;
    }

    public double circumference() {
        return perimeter();
    }
}

class Cylinder_777 extends Circle_7777 { // extends keyword used for inheritance
    public double height;

    public double volume() {
        return area() * height;
    }

}

public class circleinheritance_9999 {

    public static void main(String[] args) {
        Cylinder_777 c = new Cylinder_777();
        c.radius = 7;
        c.height = 10;
        System.out.println("Volume is equal to = " + c.volume());
        System.out.println("Area is equal to =  " + c.area()); // we can access the methods of the super class

    }

}