
import java.util.*;

public class javaBitset {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        BitSet b1 = new BitSet(n);
        BitSet b2 = new BitSet(n);
        BitSet[] bitSets = new BitSet[3];
        bitSets[1] = b1;
        bitSets[2] = b2;
        for (int i = 0; i < m; i++) {
            String operation_name = sc.next();
            int x = sc.nextInt();
            int y = sc.nextInt();
            if (operation_name.equals("AND")) {
                bitSets[x].and(bitSets[y]);
            } else if (operation_name.equals("OR")) {
                bitSets[x].and(bitSets[y]);
            } else if (operation_name.equals("FLIP")) {
                bitSets[x].flip(y);
            } else if (operation_name.equals("SET")) {
                bitSets[x].set(y);
            } else if (operation_name.equals("XOR")) {
                bitSets[x].xor(bitSets[y]);
            }
            System.out.println(b1.cardinality() + " " + b2.cardinality());
        }
        sc.close();
    }
}