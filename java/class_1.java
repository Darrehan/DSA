// Class practice in java programing

class television_444 {
    char chanel;
    char volume; // By Default members are public inside the package
    // for Accessing private members we need Property Methods we call mutators and Accessors togather as property methods 

    public void changechanel() {
        System.out.println("chanel is changed buddy " + chanel);
    }

    public void changevolume() {
        System.out.println("volume is changed buddy " + volume);
    }

}

public class class_1 {
    public static void main(String[] args) {
        television_444 t = new television_444();
        t.chanel = 'x';
        t.volume = 'v';
        t.changechanel();
        t.changevolume();
        System.out.println(t.chanel);
        System.out.println(t.volume);
    }
}
