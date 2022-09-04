import java.util.*;

public class javaArraylist {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<ArrayList<Integer>> arrayList = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int number_row = sc.nextInt();
            arrayList.add(new ArrayList<>());
            for (int j = 0; j < number_row; j++) {
                int num_tmp = sc.nextInt();
                arrayList.get(i).add(num_tmp);
            }
        }
        int queries = sc.nextInt();
        for (int i = 0; i < queries; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            if (x > arrayList.size() || y > arrayList.get(x - 1).size()) {
                System.out.println("ERROR!");
            } else {
                System.out.println(arrayList.get(x - 1).get(y - 1));
            }
        }
        sc.close();
    }
} 