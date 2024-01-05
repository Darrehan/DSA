// stacic block practice

class Test_4444
{
    static
    {
        System.out.println("Block 1");
    }
    
    static
    {
    System.out.println("Block 2");
    }
    public void show()
    {
        System.out.println("just kidding");
    }
}

public class static_45456 {
 
    public static void main(String[] args) 
    {
       
        System.out.println("Main");
        Test_4444 t=new Test_4444();
        t.show();
    }
    
   
}