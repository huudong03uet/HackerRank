
import java.util.*;

public class javaStringTokens {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        s = s.trim();
        if (s.length() == 0) {
            System.out.println(0);
            sc.close();
            return;
        }
        String[] result = s.split("[!,?._'@ ]+");
        System.out.println(result.length);
        for (int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }
        sc.close();
    }
}