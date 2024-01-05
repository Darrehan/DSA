// Practicing interface example ie related to the smartphone features and its funtionality

class iphone{
    void call(){
       System.out.println("Buddy Rehan is calling "); 
    }
    void sms()
    {
        System.out.println("Buddy you got a sms from Dar Rehan Rasool");

    }
}
    interface music {
        void playmusic();
        void stopmusic();
    }
    interface addmusic extends music{   // interface are extended
         void addsongs();
         void addGazals();
    }
    interface camera{
        void clickphoto();
        void takevedio();
    }
    interface addcamera extends camera{  //interface are extended
         void takesnapshot();

    }
    class mysmartphone_69 extends iphone implements addmusic,addcamera{
        @Override
       public void playmusic()   // here its mandatory to write public 
        {
            System.out.println("Buddy your music is on");
        }
        @Override  // now it becomes concrete class 
        public void stopmusic()
        {
            System.out.println("Buddy your music is off");
        }
        @Override
        public void addsongs()
        {
            System.out.println("Buddy your songe  is added");
        }
       @Override
       public void addGazals()
        {
            System.out.println("Buddy your Gazals is added");
        }
        @Override
        public  void clickphoto()
        {
            System.out.println("Buddy your photo  is clicked");
        }
        @Override
       public  void takevedio()
        {
            System.out.println("Buddy your vedio  is taken by CID ");
        }
       @Override
      public void call()
        {
            System.out.println("Buddy  Rehan is callying ");
        }
       @Override
      public void takesnapshot()
        {
            System.out.println("Buddy your snapshot is taken");
        }
      @Override
       public void sms()
        {
            System.out.println("Buddy you got sms");
        }

    }

public class InterfaceExample_555 {
    public static void main(String[] args) {

        mysmartphone_69 s = new mysmartphone_69(); //here i have created an object of concrete class 
 //as we know we can take the Reffrence of the super class and also can take the reffrence of interface but we cant't create object of interface
        s.playmusic();
        s.stopmusic();
        s.addsongs();
        s.addGazals();
        s.clickphoto();
        s.takesnapshot();
        s.takevedio();
        s.call();
        s.sms();
    }
}
 