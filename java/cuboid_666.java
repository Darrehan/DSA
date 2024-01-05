
// finding area and volume of cuboid using operators 
import java.util.*;

public class cuboid_666 {

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int length, breadth, height;
            int totalArea, volume;

            System.out.println("Enter Length, Breadth and Height");
            length = sc.nextInt();
            breadth = sc.nextInt();
            height = sc.nextInt();

            totalArea = 2 * (length * breadth + length * height + breadth * height);

            volume = length * breadth * height;

            System.out.println("Total Area is equal to :" + totalArea);
            System.out.println("Total Volume is equal to :" + volume);

        }
    }

}