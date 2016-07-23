class Digitfifthpowers {
  public static void main(String[] args) {
    double sum = 0;

    for(int a = 0; a < 10; a++)
      for(int b = 0; b < 10; b++)
        for(int c = 0; c < 10; c++)
          for(int d = 0; d < 10; d++)
            for(int e = 0; e < 10; e++)
              for(int f = 0; f < 10; f++) {
                String str = Integer.toString(a) + Integer.toString(b) +
                             Integer.toString(c) + Integer.toString(d) +
                             Integer.toString(e) + Integer.toString(f);
                double regNum = Double.parseDouble(str);
                double powNum = Math.pow(a,5) + Math.pow(b,5) + Math.pow(c,5) +
                                Math.pow(d,5) + Math.pow(e,5) + Math.pow(f,5);
                if(regNum == powNum)
                  sum += regNum;
            }

    System.out.println(sum-1);

  }
}
