// practicing abstract class

abstract class Super_005
{
    abstract public void meth1();  //Abstract Method
}

class Sub_9999 extends Super_005
{  @override         // method overriding
    public void meth1()    // Concrete Class 
    {
       System.out.println("buddy its sub meth1 "); 
    }
}

public class AbstractClass_4444 {

    public static void main(String[] args) {
        
        Super_005 s;  //Reffrence of Abstract Class is Allowed but we cant't create object of abstract class
        s=new Sub_9999();//Reffrence of Abstract class and creating object of concrete class .
        s.meth1();
        
    }
    
}