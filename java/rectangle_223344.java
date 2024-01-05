

class Rectangledemo_7654
{
    public double length;
    public double breadth;
    
    public double area()
    {
        return length*breadth;
    }
    
    public double perimeter()
    {
        return 2*(length+breadth);
    }
    
    public boolean isSquare()
    {
        if(length==breadth)
            return true;
        else
            return false;
    }
    
}

public class rectangle_223344 {

    public static void main(String[] args) {
        Rectangledemo_7654 r=new Rectangledemo_7654();
        r.length=10.5;
        r.breadth=5.5;
        
        System.out.println("Area"+r.area());
        System.out.println("perimeter"+r.perimeter());
        
        System.out.println("Is it a Square"+r.isSquare());
    }
    
}