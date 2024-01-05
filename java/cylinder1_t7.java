// finding area and perimeter of cylinder using property funtions 
class Cylinder {
    private int radius;
    private int height;

    public Cylinder() {
        radius = height = 1;
    }

    public Cylinder(int r, int h) {
        radius = r;
        height = h;
    }

    public int getHeight() {
        return height;
    }

    public int getRadius() {
        return radius;
    }

    public void setHeight(int h) {
        if (h >= 0)
            height = h;
        else
            System.out.println("height can't be negative buddy ");
    }

    public void setRadius(int r) {
        if (r >= 0)
            radius = r;
        else
            System.out.println("radius can't be negative buddy ");
    }

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

    public double totalSurfaceAreaArea() {
        return 2 * lidArea() + perimeter() * height;
    }

    public double volume() {
        return lidArea() * height;
    }
}

public class cylinder1_t7 {

    public static void main(String[] args) {
        Cylinder c = new Cylinder();
        c.setHeight(10);
        c.setRadius(7);
        c.setDimensions(10, 7);

        System.out.println("LidArea " + c.lidArea());
        System.out.println("Circumference " + c.perimeter());
        System.out.println("totalSurfaceArea " + c.totalSurfaceAreaArea());
        System.out.println("Volume " + c.volume());
        System.out.println("Height" + c.getHeight());
        System.out.println("Radius" + c.getRadius());

    }

}