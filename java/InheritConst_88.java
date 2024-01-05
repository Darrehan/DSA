class Parent_0 {
    public Parent_0() {
        System.out.println("Parent Constrcutor");
    }

}

class Child extends Parent_0 {
    public Child() {
        System.out.println("Child Constructor");
    }
}

class GrandChild extends Child {
    public GrandChild() {
        System.out.println("Grand Child Constructor");
    }
}

public class InheritConst_88 {

    public static void main(String[] args) {
        // priorty is given from top to bottem ie super to sub class execution of constructer 
        // // Parent_0 p = new Parent_0();
        // // Child c = new Child();
        // // GrandChild c2 = new GrandChild();
    }

}