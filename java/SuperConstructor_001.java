// parametrised constructer in inheritance 
class Parent {
    Parent() {
        System.out.println("Non-Param of parent");
    }

    Parent(int x) {
        System.out.println("Param of parent " + x);
    }
}

class Child_999 extends Parent {
    Child_999() {
        System.out.println("Non-Param of child");
    }

    Child_999(int y) {
        System.out.println("Param of child");
    }

    Child_999(int x, int y) {
        super(x);
        System.out.println("2 param of child " + y);
    }
}

public class SuperConstructor_001 {

    public static void main(String[] args) {
        // Child c=new Child();
        // Child c=new Child(20);
        // Child c=new Child(10,20);
    }

}