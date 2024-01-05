// finding area and perimeter of rectangle using the property funtion's also implement the concept of data hiding 

import java.util.Scanner;

class rectangledemo_89765 {
    private double length;
    private double breadth;

    public rectangledemo_89765() {
        length = 0; // non-parameterised constructer
        breadth = 0;
    }

    public rectangledemo_89765(double l, double b) {
        setlength(l);
        setbreadth(b); // parameterised constructer
    }

    public void setlength(double l) {
        if (l >= 0)
            length = l;
        else
            System.out.println("Length cant be negative buddy are you mad ");
        // mutators are also used for validation purpose also

    }

    public void setbreadth(double b) {
        if (b >= 0)
            breadth = b;
        else
            System.out.println("Breadth cant be negative buddy are you mad");
    }

    public double getlength() {
        return length; // Accessors
    }

    public double getbreadth() {
        return breadth;
    }

    public double area() {
        return length * breadth; // facilitators
    }

    public double perimeter() {
        return 2 * (length + breadth);
    }

    public boolean isSquare() {
        return length == breadth; // inspectors
    }
  // in java programing language we can create two types of constructers parameterised and non-parameterised constructor
}

public class rectangle_6756 {
    public static void main(String[] args) {
        try (Scanner s = new Scanner(System.in)) {
            double x, y;
            System.out.println("Enter the value of Lenght and Breadth buddy ");
            x = s.nextDouble();
            y = s.nextDouble();
            rectangledemo_89765 r1 = new rectangledemo_89765(x, y);  // calling parameterised constructor 
            System.out.println("Values ->  after calling parameterised constructor");
            System.out.println("Area is equal to = " + r1.area());
            System.out.println("Perimeter is equal to = " + r1.perimeter());
            System.out.println("Length is equal to = " + r1.getlength());
            System.out.println("Breadth is equal to = " + r1.getbreadth());
            System.out.println("Is it square buddy oh it's = " + r1.isSquare());
            // These corresponding values are after calling mutators
            System.out.println("Values ->  after calling mutators");
            r1.setlength(6);
            r1.setbreadth(7);
            System.out.println("Area is equal to = " + r1.area());
            System.out.println("Perimeter is equal to = " + r1.perimeter());
            System.out.println("Length is equal to = " + r1.getlength());
            System.out.println("Breadth is equal to = " + r1.getbreadth());
            System.out.println("Is it square buddy oh it's = " + r1.isSquare());
        }

    }
}
