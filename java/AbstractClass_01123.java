// Abstract class practice 

abstract class Shape_01 {
    abstract public double perimeter();

    abstract public double area();
}

class Circle_01 extends Shape_01 {
    double radius;

    public double perimeter() {
        return 2 * Math.PI * radius;
    }

    public double area() {
        return Math.PI * radius * radius;
    }

}

class Rectangle_01 extends Shape_01 {
    double length;
    double breadth;

    public double perimeter() {
        return 2 * (length + breadth);
    }

    public double area() {
        return length * breadth;
    }

}

public class AbstractClass_01123 {
    public static void main(String[] args) {
        Rectangle_01 r = new Rectangle_01();
        r.length = 10;
        r.breadth = 5;

        Shape_01 s = r ;

        System.out.println(s.area()); // Reffrence of abstract class is allowed

    }
}