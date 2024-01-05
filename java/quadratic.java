
// solving quadratic equation using operators 
import java.util.*;

public class quadratic {

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

            int a, b, c;
            double r1, r2;
            System.out.println("Enter the values of a ,b and c");
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            double d;
            d = b * b - 4 * a * c;
            if (d < 0) {
                System.out.println("Roots are imaginary");   // try values as 1 1 1 ,1 -4 4 ,1 5 6

            } else if (d > 0) {
                System.out.println("Roots are real");
                r1 = (-b + Math.sqrt(b * b - 4 * a * c)) / (2 * a); // Here inbuilt method Math.sqrt() returns double value.
                r2 = (-b - Math.sqrt(b * b - 4 * a * c)) / (2 * a);
                System.out.println("Roots are " + r1 + " " + r2);
            } else if (d == 0) {
                System.out.println("Roots are equal");
                r1 = (-b + Math.sqrt(b * b - 4 * a * c)) / (2 * a);
                r2 = (-b - Math.sqrt(b * b - 4 * a * c)) / (2 * a);
                System.out.println("Roots are " + r1 + " " + r2);
            } else {
                System.out.println("your input is wronge buddy :");
            }
        }
    }

}
