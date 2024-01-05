package Package;
public class Demo1
{
    public int a=10;
    //private.
    public int b=20;
    public int c=30;  // try to make it private and see the error
    public int d=40;
    
    public void display()
    {    System.out.println("Object have been created successfully");
         System.out.println(a+b+c+d);
    }
}