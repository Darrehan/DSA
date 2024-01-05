// flag and width in strings 
public class flag {

    public static void main(String[] args) {
        /*
         * int a=10;//a=-10
         * System.out.printf("%05d",a);
         */

        /*
         * float a=123.45f;//3.45f
         * System.out.printf("%6.2f",a);
         */

        String str = "Java";
        System.out.printf("%20s", str); // it will first assign spaces then its going print string
        System.out.printf("\n");
        System.out.printf("%-20s", str); // its going to print string first than its going to assign spaces ie (left assigned)

    }

}