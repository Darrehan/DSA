// practice problem customer 

class Productdemo3 {
    private String itemNo;
    private String name;
    private double price;
    private int qty;

    public Productdemo3(String itemno) {
        itemNo = itemno;
    }

    public Productdemo3(String itemno, String name) {
        itemNo = itemno;
        this.name = name;
    }

    public Productdemo3(String itemno, String name, double price, int i) {
        itemNo = itemno;
        this.name = name;
        setPrice(price);
        setQuantity(i);
    }

    public String getItemNo() {
        return itemNo;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public int getQuantity() {
        return qty;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void setQuantity(int qty) {
        this.qty = qty;
    }
}

class Customerdemo3 {
    private String custId;
    private String name;
    private String address;
    private String phno;

    public Customerdemo3(String custId, String name) {
        this.custId = custId;
        this.name = name;
    }

    public Customerdemo3(String custId, String name, String address, String phno) {
        this.custId = custId;
        this.name = name;
        this.address = address;
        setAddress(address);
        setPhno(phno);
    }

    public String getCustId() {
        return custId;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }

    public String getPhno() {
        return phno;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public void setPhno(String phno) {
        this.phno = phno;
    }
}

public class customer_3456 {
    public static void main(String[] args) {
        Customerdemo3 c = new Customerdemo3("cse20-30", "Rehan", "Nowgam", "9149544978");
        Productdemo3 p = new Productdemo3("cse-20-30", "Garnier", 55.6, 6);
        System.out.println("the customer id is equal to = " + c.getCustId());
        System.out.println("the customer address is equal to = " + c.getAddress());
        System.out.println("the cutomer name is equal to = " + c.getName());
        System.out.println("the customer phone number is equal to = " + c.getPhno());
        System.out.println("the item no is equal to = " + p.getItemNo());
        System.out.println("the item name is equal to = " + p.getName());
        System.out.println("the item quantity is equal to = " + p.getQuantity());
        System.out.println("the item price is equal to = " + p.getPrice());
    }
}