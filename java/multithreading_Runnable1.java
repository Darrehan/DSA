// multithreading using runnable .
class multithreading_Runnable1 implements Runnable{
    public void run()
    {
        int i=1;
        while (true) {
         System.out.println(i+"hello");
         i++;   
        }
    }
    public static void main (String[] args){
        multithreading_Runnable1 m = new multithreading_Runnable1();
        Thread t = new Thread(m);
        t.start();
        int i=1;
        while (true) {
         System.out.println(i+"world");
         i++;   
        }
    }
}