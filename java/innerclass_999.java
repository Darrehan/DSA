// practicing inner classes ie nwsted inner classes 
class Outer_999  //outer class cant access directly members of inner class for that we need to create an object
{
    static int x=10;
   
    
    class Inner  // inner class can directly access the members of outer class
    {
        int y=20;
        public void innerDisplay()
        {
            System.out.println(x+" "+y);
        }
    }
    
    public void outerDisplay()
    {
         Inner i=new Inner();
        i.innerDisplay();
        System.out.println(i.y);
        
    }
}

public class innerclass_999 {

    public static void main(String[] args) 
    {
        Outer_999.Inner oi=new Outer_999().new Inner();
        oi.innerDisplay();
        
    }
    
}