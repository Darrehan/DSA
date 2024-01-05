// displaying string value with the the help of scanner class 
import java.util.Scanner;

public class name {
    public static void main(String args[]) {
        try (Scanner s = new Scanner(System.in)) {
            String x;
            System.out.println("may i get your name");
            x = s.nextLine();
            System.out.println("hi " + x);
        }
    }
}
