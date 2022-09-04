import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class javaBigInteger {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        BigInteger n = new BigInteger(s);
        
        s = sc.nextLine();
        BigInteger m = new BigInteger(s);
        System.out.println(n.add(m));
        System.out.println(n.multiply(m));
        sc.close();
    }
}