package selfpowers;

import java.math.BigInteger;

public class SelfPowers {

    public static void main(String[] args) {
        BigInteger total = BigInteger.ZERO;
        BigInteger num = BigInteger.ZERO;
        
        for(int i = 1; i <= 1000; i++){
            num = num.add(BigInteger.ONE);
            total = total.add(num.pow(i));
        }
        
        String list = total.toString();
        
        for(int i = list.length()-10; i < list.length(); i++)
            System.out.print(list.charAt(i));
        System.out.println();
    }  
}
