// method overriding or funtion overriding

class Super_003
{
    public void display()
    {
        System.out.println("Super class  display buddy ");
    }
}

class Sub_1456 extends Super_003
{   
   public void display(int x )
   {
    System.out.println("This is not overriding because this display funtion is taking int as parameter its not same as above");
   }

    @override
    public void display() //method overriding means redefinning the methods of super class in subb class
    {
        System.out.println("Sub class display buddy ");
    }
}

public class Overriding_001
{
    public static void main(String[] args) 
    {
        Super_003 s =new Super_003();
        s.display();
        System.out.println();
        Sub_1456 s1 =new Sub_1456();
        s1.display();
        System.out.println();
        s1.display(1);
        System.out.println();
        Super_003 s3=new Sub_1456();//this is known as dynamic method dispacth reffrence of super class object of sub class and method overriding
        s3.display();
          
    }    
}