class Digitfactorials {

  static int[] dict = new int[10];

  public static void main(String[] args) {
    factorial(9);
    int answer = 0;

    for(int i = 3; i < 100000; i++) {
      int num = i;
      String str = Integer.toString(i);

      int sum = 0;
      for(int j = 0; j < str.length(); j++)
        sum += dict[Integer.parseInt(str.charAt(j)+"")];

      if(num == sum)
        answer += num;
    }
    System.out.println(answer);
  }

  static int factorial(int x) {
    if(x == 1) {
      dict[0] = 1;
      dict[1] = 1;
      return dict[1];
    }
    dict[x] = x * factorial(x-1);
    return dict[x];
  }
}
