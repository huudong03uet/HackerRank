
import java.util.*;

class Solution {
    public static void main(String[] argh) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        HashMap<String, Integer> mp = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String name = in.nextLine();
            int phone = in.nextInt();
            in.nextLine();
            mp.put(name, phone);
        }
        while (in.hasNext()) {
            String s = in.nextLine();
            if(mp.get(s) == null) {
                System.out.println("Not found");
            } else {
                System.out.println(s + "=" + mp.get(s));
            }
        }
        in.close();
    }
}