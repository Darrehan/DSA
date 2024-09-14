// multithreading using thread class .for creating thread we have to overide run() method which is present in thread class
class mythread extends Thread{
    public void run()
    {
        int i=1;
        while (true) {
         System.out.println(i+"hello");
         i++;   
        }
    }
}
public class multithreading_threadclass{

    public static void main(String[] args) {
        mythread t= new mythread();
        t.start();
        int i=1;
        while (true) {
            System.out.println(i+"world");
            i++;
        }

    }
}