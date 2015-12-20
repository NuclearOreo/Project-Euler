package largesum;

import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class LargeSum {

    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("largeSum.txt");
        Scanner readfile = new Scanner(file);
        
        BigInteger sum = BigInteger.ZERO;
        
        while(readfile.hasNextBigInteger()){
            BigInteger temp = readfile.nextBigInteger();
            sum = sum.add(temp);
        }
        
        System.out.println(sum);
    }  
}
