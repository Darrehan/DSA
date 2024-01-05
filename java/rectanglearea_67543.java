// finding area and perimeter of rectangle 

class Rectangle_112233 {
    public double length;
    public double breadth;

    public double area() {
        return length * breadth;
    }

    public double perimeter() {
        return 2 * (length + breadth);
    }

    public boolean isSquare() {
        return length == breadth;
    }

}

public class rectanglearea_67543 {
    

    public static void main(String[] args) {
        Rectangle_112233 r = new Rectangle_112233();
        r.length = 10.5;
        r.breadth = 5.5;

        System.out.println("Area is equal to = " + r.area());
        System.out.println("perimeter is equal to =" + r.perimeter());

        System.out.println("Is it a Square  Hmm =" + r.isSquare());
    }

}