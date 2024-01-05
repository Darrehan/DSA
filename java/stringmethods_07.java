// practicing class string difffrent methods Regular Expression metacharecters quantifiers 

public class stringmethods_07 {
    // Cheking if a string is Binary number
    public static void main(String[] args) {
        int b = 100110010;

        String str = String.valueOf(b); // built in method for converting int into string

        System.out.println(str.matches("[01]+"));// + means 1 or more time

    }

    /*
     * public static void main(String[] args)
     * {
     * 
     * String str="a!B@c#1$2%3";
     * 
     * str=str.replaceAll("[^a-zA-Z0-9]", "");  // here this line means replace all sepecial charecters with empty spaces
     * 
     * System.out.println(str);
     * 
     * 
     * }
     */
    /*
     * Counting words in a String
     * public static void main(String[] args)
     * {
     * 
     * String str="      abc     def     gh   ijk    ";
     * 
     * str=str.replaceAll("\\s+", " ").trim(); // Here by using trim() we can remove tailing and leading spaces
     * 
     * String words[]=str.split("\\s"); //here its going to store list of words inside array based on space split .
     * 
     * System.out.println(words.length);
     * 
     * 
     * }
     */
}