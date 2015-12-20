package latticepath;

import java.math.BigInteger;

public class LatticePath {
    public static void main(String[] args) {
        BigInteger num = new BigInteger("20");
        BigInteger n = fac(num.add(num));
        BigInteger k = fac(num);
        k = k.multiply(k);
        System.out.println(n.divide(k));
    }   
    
    static BigInteger fac(BigInteger n){
        BigInteger negOne = new BigInteger("-1");
        if(n.compareTo(BigInteger.ONE) == 0)
            return BigInteger.ONE;
        return n.multiply(fac(n.add(negOne)));
    }
}
