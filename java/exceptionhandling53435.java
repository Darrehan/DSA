// Program to demonstrate Exception Handling

class NegativeDimensionException extends Exception//user defined exception
{
    public String toString()
    {
        return "Dimensions of a Rectangle cannot be Negative";//overriding toString() method
    }
}

public class exceptionhandling53435
{
    static int area(int l,int b) throws NegativeDimensionException
    {
        if(l<0 || b<0)
            throw new NegativeDimensionException();//throwing an exception
        return l*b;
    }
    static void meth1() throws NegativeDimensionException
    {
        System.out.println("Area is "+area(10,2));
    }
    
    public static void main(String[] args) 
    {
        try
        {
        meth1();
        }
        catch(NegativeDimensionException e)//catching an exception
        {
            System.out.println(e);
        }
        System.err.println("hi");
    } 
}