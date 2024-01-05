// string methods in java programing language

public class stringmethods_01 {

    public static void main(String[] args) {

        /*
         * String str1="Java Program";
         * System.out.println(str1);
         * 
         * String str2=new String("JAVA");
         * System.out.println(str2);
         * 
         * char c[]={'H','e','l','l','o'}; // charecter string
         * //String str3=new String(c);
         * String str3=new String(c,1,3); // it will start from index 1 and include 3
         * caharecters
         * System.out.println(str3);
         * 
         * byte b[]={65,66,67,68};
         * //String str4=new String(b);
         * String str4=new String(b,1,2); // it will start from index 1 and include 2
         * charecters
         * System.out.println(str4);
         */

        String str1 = "Java";
        // String str2="Java";
        String str2 = new String("Java");// str1 and str2 are not equal because one object is
        // created inside the string constant pool and another is crerated inside the heap memory
        System.out.println(str1 == str2);
    }

}