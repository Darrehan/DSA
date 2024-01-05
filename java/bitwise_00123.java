// bitwise operators in java programing

public class bitwise_00123 {

    public static void main(String[] args) {

        /*
         * int x=10, y=6,z;
         * z=x&y;
         * System.out.println(z);
         */

        /*
         * int x=0b1010, y=0b0110,z;
         * z=x|y; //x^y
         * System.out.println(z);
         */

        /*
         * int x=0b1000;
         * int y;
         * y=x<<1; //x<<2 //x>>1 //x>>2
         * System.out.println(y);
         */

        int x = -0b1010; // try with + and -
        int y;
        y = x >> 1; // bitwise wise right shift operator the no of times you are performing right shift the of times it gets divide 
        // ~x bit wise not
        System.out.println(String.format("%s", Integer.toBinaryString(x)));
        System.out.println(String.format("%s", Integer.toBinaryString(y)));
    }

}