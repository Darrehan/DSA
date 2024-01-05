
// static keyword practice 
class Test_6666 {
    static int x = 10;
    int y = 20;

    void show() {
        System.out.println(x + " " + y);
    }

    static void display() {
        System.out.println(x); //static methods can access only static members of a class
    }
}

public class static_999 {

    public static void main(String[] args) {

        Test_6666 t1 = new Test_6666();
        t1.show();
        Test_6666.x = 30;
        t1.y = 50;

        Test_6666 t2 = new Test_6666();
        t2.show();

    }

}