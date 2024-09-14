//single class used 
class multithreading_threadclass2nd extends Thread{
    public void run()
    {
        int i=1;
        while (true) {
            System.out.println(i+"world");
            i++; 
        }
        
    }
    public static void main (String[] args)
    {
        multithreading_threadclass2nd t =new multithreading_threadclass2nd();
        t.start();
        int i=1;
        while (true) {
            System.out.println(i+"hi");
            i++; 
        }

    }
}