// practicing the concepts of inner classes in java 
 
class Outer_5656
{
    int x=10;
    static int y=20;
    
    static class My
    {
        public void show()
        {
            System.out.println(y);
        }
    }
    
    
}

public class innerclass_55555
{ 
    public static void main(String[] args) 
    {
        Outer_5656.My m=new Outer_5656.My();
        m.show();

    }// for static class we dont need to create object of outer class we can directly create the object of innner class
      // by taking reffrence of outer class 
}