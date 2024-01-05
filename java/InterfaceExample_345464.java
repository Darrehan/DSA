// Practicing the interface problem 
interface Member {
    public void callback();
}

class Store {
    Member members[] = new Member[10];
    int count = 0;

    void register(Member m) {
        members[count++] = m;
    }

    void inviteSale() {
        for (int i = 0; i < count; i++)
            members[i].callback();
    }

}

class Customer implements Member // here interface is implemeted
{
    String name;

    Customer(String n) { // parameterised constructer
        name = n;
    }

    public void callback() // calback() methods interface
    {
        System.out.println("Ok, I will visit," + name);

    }

}

public class InterfaceExample_345464 {

    public static void main(String[] args) {
        Store s = new Store();// creating the object of store
        Customer c1 = new Customer("Rehan");
        Customer c2 = new Customer("Musaib");
        Customer c3 = new Customer("Arif");
        Customer c4 = new Customer("Zamin");
        Customer c5 = new Customer("Yasir");
        Customer c6 = new Customer("faisal");

        s.register(c1);
        s.register(c2);
        s.register(c3);
        s.register(c4);
        s.register(c5);
        s.register(c6);
        s.inviteSale();
    }

}