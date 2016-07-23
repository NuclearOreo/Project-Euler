import java.util.ArrayList;

class Distinctpowers {
  public static void main(String[] args) {
    ArrayList<Double> dict = new ArrayList<Double>();

    for(int x = 2; x <= 100; x++)
      for(int y = 2; y <= 100; y++) {
        double num = Math.pow(x,y);
        if(dict.indexOf(num) == -1)
          dict.add(num);
      }

    System.out.println(dict.size());
  }
}
