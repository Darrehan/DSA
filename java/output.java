// diffrent methods of object out 

public class output {

    public static void main(String[] args) {
        int x = 10;
        float y = 12.56f;
        String str = "Java Program";
        // format sepacifiers is independent of order of arguements
        System.out.printf("%3$s %2$f %1$d", x, y, str);
        // System.out.printf("Hello %d %f %c %s\n",x,y,z,str);
        // %o,%x,%e for float value

    }

}
