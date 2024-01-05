// overrriding practice example
class Television
{
    public void switchON()   // super class 
    { 
        System.out.println("My Dear Buddy TV is Switched ON");
     }
    
    public void changeChannel() 
    { 
        System.out.println("My Dear Buddy TV Channel is Changed "); 
    }
     public void browse()
    { 
        System.out.println("My Dear Buddy Smart Tv Browsing lol");
     }
    
    
}

class SmartTelevision extends Television   // sub class 
{
    @Override     //annotation of overriding 
    public void switchON()
    { 
        System.out.println("My Dear Buddy Smart TV is Switched ON");
    }
    
    @Override
    public void changeChannel()   //methods overriding 
     { 
        System.out.println("My Dear Buddy SmartTV Channel is Changed "); 
    }
    @Override
    public void browse()
    { 
        System.out.println("My Dear Buddy Smart Tv is  Browsing lol ");
     }
    
}

public class Overriding_112233 
{

    public static void main(String[] args) 
    {
        Television t =new Television();
        t.switchON();
        t.changeChannel();
        SmartTelevision s = new SmartTelevision();
        s.switchON();
        s.changeChannel();
        s.browse();
        Television t1 =new SmartTelevision();//dynamic method dispatch  only those methods are called which are present in super class
        t1.switchON();
        t1.changeChannel();  //Dynamic Method Dispacth ->Reffrence of superclass ,object of sub class and Overrriding 
        t1.browse();
    }
    
}