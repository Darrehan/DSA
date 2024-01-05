import java.util.Scanner;

public class sum {
    public static void main(String args[]) {
        int c;
        try (Scanner S = new Scanner(System.in)) {
            int a, b;
            System.out.println("input two integer value");
            a = S.nextInt();
            b = S.nextInt();
            c = a + b;
        }
        System.out.println("sum is equal to " + c);
    }
}
