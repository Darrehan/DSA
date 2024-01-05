// parametrised constructer in inheritance using keyword super();
class rectangle_r{
    int length;
    int breadth;
    rectangle_r()
    {
        length=1;
        breadth=1;

    }
    rectangle_r(int length,int breadth)
    { 
        this.length=length;
        this.breadth=breadth;

    }
}
class cubiod_c extends rectangle_r{   //extends keyword is used for inheritance 
    int height;
    cubiod_c()
    {
        height=1;
    }
    cubiod_c(int height)
    {
     this.height=height;
    }
    cubiod_c(int length,int breadth,int height){
        super(length,breadth); // super keyword is used for calling the parameterised constructer of super class 
        this.height=height;

    }
    int volume()
    {
        return length*breadth*height;
    }
}
public class SuperconstrCubiod {
    
    public static void main(String[] args) {
        cubiod_c cub = new cubiod_c(9, 9, 9);
        System.out.println("volume is equal to buddy hmm = "+cub.volume());
    }
}
