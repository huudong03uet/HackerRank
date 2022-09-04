
import java.util.*;


public class javaDequeue {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int number_ = sc.nextInt();
        int cnt = sc.nextInt();
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < number_; i++) {
            int number_tmp = sc.nextInt();
            list.add(number_tmp);
        }
        int result = 1;
        Deque<Integer> deque = new ArrayDeque<>();
        HashSet<Integer> hashSet = new HashSet<>();
        for (int i = 0; i < number_; i++) {

            if (deque.size() >= cnt) {
                int last_element = deque.pollFirst();
                if (deque.contains(last_element) == false) {
                    hashSet.remove(last_element);
                }
            }
            deque.add(list.get(i));
            hashSet.add(list.get(i));
            result = Math.max(result, hashSet.size());
        }
        System.out.println(result);
        sc.close();
    }
}