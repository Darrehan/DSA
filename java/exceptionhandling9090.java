// Program to demonstrate nested try-catch blocks

public class exceptionhandling9090
{
    public static void main(String[] args) 
    {
        int A[]={30,20,10,40,0};
        
        try
        {
            int c=A[0]/A[4];   //ArithmeticException e
            System.out.println("Division is "+c);
        
            try
            {
                System.out.println(A[5]); //ArrayIndexOutOfBoundsException e
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                System.out.println("Index is Invalid");
            }
            
        }
        catch(ArithmeticException e)
        {
            System.out.println("Denominator should not be 0");
        }
        
        
        System.out.println("Bye");
    }
}