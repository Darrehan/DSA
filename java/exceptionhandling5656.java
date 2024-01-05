// Program to demonstrate Exception Handling in Java
class LowBalanceException extends Exception
{
    public String toString()
    {
        return "Balance Should not be less than 5000";
    }
}

public class exceptionhandling5656
{
    static void fun1()
    {
        try                                   //checked exception we have to handle it using try catch block
        {
            throw new LowBalanceException(); //throwing an exception
        }
        catch(LowBalanceException e)
        {
            System.out.println(e);
        }
    }
    
    static void fun2()
    {
        fun1();
    }
    
    static void fun3()
    {
        fun2();
    }
    
    public static void main(String[] args) 
    {
       fun3();
    }   
}