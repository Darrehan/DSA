// Program to demonstrate exception handling

import java.util.Scanner;

public class exceptionhandling999
{
    public static void main(String[] args) 
    {
        int a,b,c;
        
       try (Scanner sc = new Scanner(System.in)) {
        System.out.println("Enter two numbers buddy integer values only:");  //try with resources
        a=sc.nextInt();
        b=sc.nextInt();
    }
        
        try
        {
            c=a/b;
            System.out.println("Division is = " +c);//try with resources
        }
        catch(ArithmeticException e)
        {
            System.out.println("Denominator should not be 0 Buddy,you know that right?");//catch with resources
        }
        System.out.println("Bye");
        
        
    } 
}