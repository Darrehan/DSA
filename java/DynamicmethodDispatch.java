// Dynamic method dispatch example

class Super
{
    public void meth1()
    {
        System.out.println("Super Meth0d-1");
    }
    
    public void meth2()
    {
        System.out.println("Super Method-2");
    }
}

class Sub extends Super
{
    @Override
    public void meth2()
    {
        System.err.println("Sub Method-2");
    }
    
    public void meth3()
    {
        System.out.println("Sub Method-3");
    }
}

public class DynamicmethodDispatch
{
    public static void main(String[] args) 
    {
        Super sup=new Sub();
       
        sup.meth1();
        sup.meth2();

        
    }   
}