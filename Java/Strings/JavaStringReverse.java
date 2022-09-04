
import java.util.*;

public class JavaStringReverse {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        /* Enter your code here. Print output to STDOUT. */
        Boolean hasPali = true;
        for (int i = 0; i < A.length() / 2; i++) {
            if (A.charAt(i) != A.charAt(A.length() - i - 1)) {
                hasPali = false;
                System.out.println("No");
                break;
            }
        }
        if (hasPali == true)
            System.out.print("Yes");
        sc.close();
    }
}
