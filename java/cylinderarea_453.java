
// Finding area of cylinder using class   
import java.util.Scanner;;

class Cylinder_8765 {
    private int radius;
    private int height;

    public Cylinder_8765() // Here its called non-parameterised constructer
    {
        radius = height = 1;
    }

    public Cylinder_8765(int r, int h) {
        radius = r; // Here its called parameterised constructer
        height = h;
    }

    public int getHeight()// Here these funtion are called accessers
    {
        return height;
    }

    public int getRadius() {
        return radius;
    }

    public void setHeight(int h) // Here these funtions are called mutators ,mutators are also usefull for
                                 // validation purpose also
    {
        if (h >= 0)
            height = h;
        else
            System.out.println("Height can't be negative Buddy are you mad ");
    }

    public void setRadius(int r) {
        if (r >= 0)
            radius = r;
        else
            System.out.println("Radius can't be negative Buddy are you mad ");
    }

    // Here till the value of height and radius is according to the user but after
    // calling setDimensions funtion value will change so the result is diffrent
    public void setDimensions(int h, int r) {
        height = h;
        radius = r;
    }

    public double lidArea() {
        return Math.PI * radius * radius;
    }

    public double perimeter() {
        return 2 * Math.PI * radius;
    }

    public double drumArea() {
        return 2 * lidArea() + perimeter() * height;
    }

    public double volume() {
        return lidArea() * height;
    }
}

public class cylinderarea_453 {

    public static void main(String[] args) {
        try (Scanner s = new Scanner(System.in)) {
            int x, y;
            System.out.println("Enter the value of Height and Radius buddy ");
            x = s.nextInt();
            y = s.nextInt();
            Cylinder_8765 c = new Cylinder_8765();
            c.setHeight(x);
            c.setRadius(y);
            System.out.println("Area According to the user in put values buddy ");
            System.out.println("Lidarea is equal to =  " + c.lidArea());
            System.out.println("Circumference is equal to =  " + c.perimeter());
            System.out.println("totalSurfaceArea is equal to =  " + c.drumArea());
            System.out.println("Volume  is equal to  = " + c.volume());
            System.out.println("Height is equal to = " + c.getHeight());
            System.out.println("Radius is equal to = " + c.getRadius());
            System.out.println("Area According to setDimension funtion buddy  ");
            c.setDimensions(10, 7); // its setting the dimension of height and radius
            System.out.println("Lidarea is equal to =  " + c.lidArea());
            System.out.println("Circumference is equal to =  " + c.perimeter());
            System.out.println("totalSurfaceArea is equal to =  " + c.drumArea());
            System.out.println("Volume  is equal to  = " + c.volume());
            System.out.println("Height is equal to = " + c.getHeight());
            System.out.println("Radius is equal to = " + c.getRadius());
        }

    }

}