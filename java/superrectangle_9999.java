// this and super keyword


class Rectangle_6655
{
    int length;
    int breadth;
    int x=10;
    
    Rectangle_6655(int length,int breadth)
    {
        this.length=length;
        this.breadth=breadth;
    }
   
}

class Cuboid extends Rectangle_6655
{
    int height;
    int x=20;
    
    Cuboid(int l,int b,int h)
    {
        super(l,b);
        height=h;
    }
    int volume(){
        return length*breadth*height;
    }
    
    void display()
    {
        System.out.println(super.x);
        System.out.println(x);
    }
}


public class superrectangle_9999
{
    public static void main(String[] args) 
    {
    
           Cuboid c=new Cuboid(5,5,5);
           System.out.println("Volume is equal to = "+ c.volume());
           c.display();
        
    }   
}