import java.util.Arrays;
import java.util.ArrayList;

class primePremutation {
  public static void main(String[] args) {
    ArrayList<Integer> nums = prime(10000);
    int len = nums.size();
    int num1, num2, num3;

    for(int j = 0; j < len; j++) {
      num1 = nums.get(j);
      for(int i = j+1; i < len;  i++) {
        if(isPerm(num1,nums.get(i))) {
          num2 = nums.get(i);
          num3 = num2 + (num2- num1);
          if(isPrime(num3,nums) && isPerm(num3,num2))
              System.out.println(Integer.toString(num1) + Integer.toString(num2) +
              Integer.toString(num3));
        }
      }
    }

  }

  public static ArrayList<Integer> prime(int n) {
    n++;
    boolean[] primes = new boolean[n];
    Arrays.fill(primes,true);
    primes[0] = false;
    primes[1] = false;

    for(int i = 2; i < n; i++) {
      for(int j = 2*i; j < n; j+=i)
        primes[j] = false;
    }

    ArrayList<Integer> list = new ArrayList<Integer>();
    for(int i = 0; i < n; i++) {
      int len = Integer.toString(i).length();
      if(primes[i] && len == 4)
        list.add(i);
    }
    return list;
  }

  static public boolean isPerm(int m, int n) {
    int[] arr = new int[10];

    int temp = n;
    while(temp > 0){
        arr[temp % 10]++;
        temp /= 10;
    }

    temp = m;
    while(temp > 0){
        arr[temp % 10]--;
        temp /= 10;
    }

    for(int i = 0; i< 10; i++){
        if(arr[i] != 0)
            return false;
    }
    return true;
  }

  public static boolean isPrime(int n, ArrayList<Integer> list) {
    for (int p : list)
      if(p == n)
        return true;
    return false;
  }
}
