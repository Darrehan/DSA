// static keyword practicing problem
// import java.util.*;
class Student_5656
{
    private String rollNo;
    
    // private static int count=1;
    
    // private String assignRollNo()
    // {
    //     Date d=new Date();
        
    //     String rno="CSE-"+(d.getYear()+1900)+"-"+count;
    //     count++;
    //      return rno;
    // }
    Student_5656()
    {
        // rollNo=assignRollNo();
    }
    public String getRollNo()
    {
        return rollNo;
    }
    
}

public class staticUniversitystudent 
{
    public static void main(String[] args) 
    {
        Student_5656 s1=new Student_5656();
        Student_5656 s2=new Student_5656();
        Student_5656 s3=new Student_5656();
        Student_5656 s4=new Student_5656();
        Student_5656 s5=new Student_5656();
        Student_5656 s6=new Student_5656();
        Student_5656 s7=new Student_5656();
        
        System.out.println(s1.getRollNo());
        System.out.println(s2.getRollNo());
        System.out.println(s3.getRollNo());
        System.out.println(s4.getRollNo());
        System.out.println(s5.getRollNo());
        System.out.println(s6.getRollNo());
        System.out.println(s7.getRollNo());
        
    }   
}