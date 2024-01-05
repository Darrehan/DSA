//Learning interface 

interface Test_012345 {
    final static int X = 10;

    public abstract void meth1(); // we don't need to to write public abstract by defaut its abstract and public.

    public abstract void meth2();

    public static void meth3() // with the help of static interface methods can have body 
    {
        System.out.println("Meth3 of Test");//can also use default keyword we cant't acces but if we didi't override it will automatically availaible
    }
}//we can directly access static members from main method using interface name and dot (.)operator 

interface Test2_5674 extends Test_012345 // An inetrface can extends An interface.
{
    public abstract void meth4();
}

class My_8888 implements Test2_5674 // in java -> A class can implement multiple interface.
{
    @Override
    public void meth1() {
        System.out.println("Meth1"); // concrete class
    }

    @Override
    public void meth2() {
        System.out.println("Meth2");
    }

    @override
    public void meth4() {
        System.out.println("Meth4");
    }

}

public class InterfaceDemo_112233 {
    public static void main(String[] args) {
        System.out.println(Test_012345.X);
        Test_012345.meth3();
        My_8888 i = new My_8888();  // dirctly access static members of interface 
        i.meth1();
        i.meth2();
        i.meth4();

    }
}