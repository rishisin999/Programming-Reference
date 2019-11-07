public class GCD {

  //Method to calculate Greatest Common Divisor in one line
  public static int calculateGCD(int cur, int prev) {
    return prev%cur == 0 ? cur : calculateGCD(prev%cur, cur);
  }


  public static void main(String[] args) {
    System.out.println("The Greatest Common Divisor of 14 and 48 is : " + calculateGCD(14,48));
  }


}
