class Account_000A {
    private String accNo;
    private String name;
    private String address;
    private String phno;
    private String dob;
    protected long balance;

    public Account_000A(String acc, String n, String add, String phno, String dob) // implicit super constructer
    {
        accNo = acc;
        name = n;
        address = add;
        this.phno = phno;
        this.dob = dob;
        balance = 0;
    }

    public String getAccNo() {
        return accNo;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    };

    public String getPhno() {
        return phno;
    }

    public String getDOB() {
        return dob;
    }

    public long getBalance() {
        return balance;
    }

    public void setAddress(String add) {
        address = add;
    }

    public void setPhno(String phno) {
        this.phno = phno;
    }

}

class SavingsAccount_000A extends Account_000A {
    public SavingsAccount_000A(String acc, String n, String add, String phno, String dob) {
        super(acc, n, add, phno, dob);// super keyword is used for calling  super class constructutor
        // Implicit super constructor Account_000A() is undefined for default constructor.
        // Must define an explicit constructor
    }

    public void deposit(long amt) {
        balance += amt;
    }

    public void withdraw(long amt) {
        balance -= amt;
    }
}

class LoanAccount_000A extends Account_000A {
    public LoanAccount_000A(String acc, String n, String add, String phno, String dob) {
        super(acc, n, add, phno, dob);
        // Implicit super constructor Account_000A() is undefined for default constructor.
        // Must define an explicit constructor
    }

    public void payEMI(long amt) {
        balance -= amt;
    }

    public void repay(long amt) {
        if (balance == amt)
            balance = 0;
    }
}

public class AcccountProblem {
    public static void main(String[] args) {

        Account_000A A = new Account_000A("4567893", "Rehan", "Nowgam", "9149544978", "18-04-2000");
        System.out.println(A.getAccNo());
        System.out.println(A.getAddress());
        System.out.println(A.getBalance());
        System.out.println(A.getDOB());
        System.out.println(A.getPhno());

    }

}
