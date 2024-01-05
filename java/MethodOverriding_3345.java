// method overriding rules
class Super_12345
{
    public void display()// we can use private Protected public .but we can't put private inside sub class
    {
        System.out.println("Super display.");
        
    }
}

class Sub_5555 extends Super_12345    
{
    //@Override if public
    @Override
    public void display()
    {
        System.out.println("Sub diaplay.");
        
    }
}

public class MethodOverriding_3345{

    public static void main(String[] args) {
        
        Sub_5555 s=new Sub_5555();
        s.display();
        Super_12345 s1 = new Super_12345();
        s1.display();
    }
    
}