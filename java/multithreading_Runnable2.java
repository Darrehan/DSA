class my implements Runnable{
    public void run()
{
    int i=1;
    while (true) {
        System.out.println(i+"hi");
         i++;  
    }
}
}
public class multithreading_Runnable2{
    public static void main (String[] args)
    {
        my m =new my();
        Thread t=new Thread(m);
        t.start();
        int i=1;
    while (true) {
        System.out.println(i+"world");
         i++;  
    }
    }
}