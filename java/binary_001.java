// binary to integer conversion
import java.util.Scanner;

public class binary_001 {
    public static void main(String args[]) {
        try (Scanner s = new Scanner(System.in)) {
            System.out.println("Enter the number in binary");
            s.useRadix(2); // Here we are using inbuilt method useRadix()
            int x = s.nextInt();
            System.out.println(x);
        }
    }
}