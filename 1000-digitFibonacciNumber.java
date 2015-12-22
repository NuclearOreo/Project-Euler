import java.math.BigInteger;
import java.util.Arrays;

class digitFibonacciNumber {

  static public BigInteger[] memo;

  public static void main(String[] args) {
    int i = 1000;

    while (true) {
      BigInteger num = fib(i);
      if(num.toString().length() == 1000)
        break;
      i++;
    }

  System.out.println(i);
  }

  public static BigInteger fib(int num) {
    memo = new BigInteger[num+1];
    Arrays.fill(memo,new BigInteger("-1"));
    return fibi(num);
  }

  public static BigInteger fibi(int num) {
    if (num <= 2)
      return new BigInteger("1");

    if (memo[num].compareTo(new BigInteger("-1")) != 0)
      return memo[num];

    memo[num] = fibi(num-1).add(fibi(num-2));

    return memo[num];
  }
}
