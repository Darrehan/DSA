// Finding area and perimeter ie circumference of circle using class and inbuilt method Math.PI
class Circle_999{
    public double radius;

    public double area() {
        return Math.PI * radius * radius;
    }

    public double perimeter() {
        return 2 * Math.PI * radius; // perimeter = circumference
    }

    public double circumference() {
        return perimeter();
    }

    
}
// Do Remember one thing the file name should not be  same as class name used in the program

public class circlearea_01234 {

    public static void main(String[] args) {
        Circle_999 c1 = new Circle_999();
        Circle_999 c2 = new Circle_999();
        c1.radius = 7;
        c2.radius = 4;
        System.out.println("Area1:" + c1.area());
        System.out.println("Perimeter1:" + c1.perimeter());
        System.out.println("Circumference1:" + c1.circumference());

        System.out.println("Area2:" + c2.area());
        System.out.println("Perimeter2:" + c2.perimeter());
        System.out.println("Circumference2:" + c2.circumference());

    }

}