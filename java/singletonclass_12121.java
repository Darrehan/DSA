// singleton class practice problem
class CoffeeMachine
{
    // private float coffeQty;
    // private float milkQty;
    // private float waterQty;
    // private float sugarQty;
    
    static private CoffeeMachine my=null;  // keeping Refrence initially null ,kepping static so that getinstance() can access it
    
    private CoffeeMachine()  // we cant create the object of this class because the constructer is private 
    {
        // coffeQty=1;
        // milkQty=1;
        // waterQty=1;
        // sugarQty=1;
    }
   
    
    public void fillWater(float qty)
    {
        // waterQty=qty;
    }
    public void fillSugar(float qty)
    {
        // sugarQty=qty;
    }
    public float getCoffee()
    {
        return 0.15f;
    }
    
    static  public CoffeeMachine getInstance()
    {  // getInstance() will create the instance of the object.only sigle object will be created.we can also set the range here 
        if(my==null)
            my=new CoffeeMachine();
        return my;
    }
    
            
}
public class singletonclass_12121
{
    public static void main(String[] args) 
    {
        CoffeeMachine m1=CoffeeMachine.getInstance();
        CoffeeMachine m2=CoffeeMachine.getInstance();
        CoffeeMachine m3=CoffeeMachine.getInstance();
        System.out.println(m1+" "+m2+" "+m3);
        if(m1==m2 && m1==m3)
        {
              System.out.println(" buddy reffrences  are Same ");  
        }
       
        
    }   
}