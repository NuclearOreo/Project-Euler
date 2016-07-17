class problem36 {
  public static void main(String[] args) {
    int sum = 0;

    for (int i = 0; i < 1000000; i++) {
      String base10 = Integer.toString(i);
      String base2 = Integer.toString(i,2);

      if(checker(base10) && checker(base2))
        sum += i;
    }
    System.out.println(sum);
  }

  static boolean checker(String str) {
    String revStr = "";
    for(int i = str.length()-1; i >= 0; i--)
      revStr += str.charAt(i);

    if(str.compareTo(revStr) == 0)
      return true;
    return false;
  }
}
