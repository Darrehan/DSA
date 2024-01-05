// Abstract Class practice 
abstract class Super_992211 //Abstract class
{
    public Super_992211() { System.out.println("Super Constructor"); }
    
    public void meth1()
    {
        System.out.println("Meth1 of Super");
        
    }
    
    abstract public void meth2(); //Abstract Methods  without having funtion body undefined funtion .
}

class Sub_88557 extends Super_992211     //Concrete Class 
{
    @Override     //Method overiding
    public void meth2()
    {
        System.out.println("Sub meth2");
    }
}
public class AbstractClass_001
{
    public static void main(String[] args) 
    {
        Super_992211 s=new Sub_88557();  //Dynamic Method Dispatch
        s.meth1();
        s.meth2();
    }    
}