// Demonstrate the use of try with resource statement
import java.io.*;
import java.util.*;

public class exceptionhandlingTryResouce99 
{
    
    static void Divide() throws Exception
    {
        
        
        try(FileInputStream fi=new FileInputStream("C:\\Users\\Public");Scanner sc=new Scanner(fi) )
        {
        int a=sc.nextInt();
        //int b=sc.nextInt(); //if we give 0 it will throw an exception
        int c=sc.nextInt();
        System.out.println(a/c);
        }// it will automatically close the file no need  to write finally block or fi.close() 
        
    }
    
    public static void main(String[] args) throws Exception
    {
        try
        {
        Divide();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        
        //int x=sc.nextInt(); // it will throw an exception because scanner is closed also file is closed
        
       // System.out.println(x);
        
    }
    
}