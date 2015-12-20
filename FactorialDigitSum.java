package factorialdigitsum;

import java.math.BigInteger;

public class FactorialDigitSum {

    public static void main(String[] args) {
        BigInteger num = new BigInteger("1000");
        String list = fac(num).toString();
        
        int sum = 0,temp;
        for(int i = 0; i < list.length(); i++){
            temp = Integer.parseInt(list.charAt(i) + "");
            sum = sum + temp;
        }
        
        System.out.println(sum);
    }
    
    static BigInteger fac(BigInteger n){
        BigInteger negOne = new BigInteger("-1");
        if(n.compareTo(BigInteger.ONE) == 0)
            return BigInteger.ONE;
        return n.multiply(fac(n.add(negOne)));
    }
}
