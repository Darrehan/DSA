import Package.Demo1;
//packages is collection of classes,interface and other packages .packages are used for organising java project .package is like a folder 
/*Public class Demo2()
{
    Demo1 d=new Demo1();
    public void show()
    {
        System.out.println(d.a+d.b+d.c+d.d);
    }
    
}*/
class Demo3 extends Demo1
{
    Demo1 d=new Demo1();
    public void show()
    {
        System.out.println(d.a+d.b+d.c+d.d);
    }
}

class Demo4 extends Demo1
{
    public void show()
    {
        System.out.println(a+b+c+d);
    }
}
    

public class packagesdemo_666 {

    
    public static void main(String[] args) 
    {
      Demo1 d1=new Demo1();
      d1.display();
      System.out.println(d1.a+d1.b+d1.c+d1.d);
      
    }
    
}