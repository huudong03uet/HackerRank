
import java.util.*;

public class javaSubarray {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arrayList = new ArrayList<>();
        int number_ = sc.nextInt();
        for (int i = 0; i < number_; i++) {
            int tmp = sc.nextInt();
            arrayList.add(tmp);
        }
        int cnt = 0;
        for (int i = 0; i < number_; i++) {
            int sum_element = 0;
            for (int j = i; j < number_; j++) {
                sum_element += arrayList.get(j);
                if (sum_element < 0) cnt++;
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}