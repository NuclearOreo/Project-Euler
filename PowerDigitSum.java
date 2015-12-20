import java.math.BigInteger;

class PowerDigitSum {
  public static void main(String[] args) {
    BigInteger num = new BigInteger("1");

    for(int i = 0; i < 1000; i++)
      num = num.multiply(new BigInteger("2"));

    int sum = 0;
    String str = num.toString();

    for (int i = 0;i < str.length();i++)
      sum += Integer.parseInt(str.charAt(i)+"");

    System.out.println(sum);
  }
}
