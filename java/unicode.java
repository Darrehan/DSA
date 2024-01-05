//java supports unicode.organistion so that the  charecter is taking  two bytes .ASCII becomes subset of unicode.organisation range 0 t0 65535 
public class unicode {
  public static void main(String args[]) {
    for (char c = 0x0370; c <= 0x03FF; c++) {
      System.out.print(c + " ");
    }
  }
}