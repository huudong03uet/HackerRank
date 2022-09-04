
import java.util.*;

public class javaAnagrams {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String a = sc.next().toLowerCase();
        String b = sc.next().toLowerCase();
        HashMap<Character, Integer> hashMap1 = new HashMap<>();
        HashMap<Character, Integer> hashMap2 = new HashMap<>();
        for (int i = 0; i < a.length(); i++) {
            if(hashMap1.get(a.charAt(i)) == null) {
                hashMap1.put(a.charAt(i), 1);
            } else {
                int tmp = hashMap1.get(a.charAt(i));
                tmp++;
                hashMap1.replace(a.charAt(i), tmp);
            }

        }
        for (int i = 0; i < b.length(); i++) {
            if(hashMap2.get(b.charAt(i)) == null) {
                hashMap2.put(b.charAt(i), 1);
            } else {
                int tmp = hashMap2.get(b.charAt(i));
                tmp++;
                hashMap2.replace(b.charAt(i), tmp);
            }

        }
        boolean result = true;
        for(Map.Entry<Character, Integer> entry : hashMap1.entrySet()) {
            if(entry.getValue() != hashMap2.get(entry.getKey())) {
                result = false;
                break;
            }
        }
        if(result == true) {
            for(Map.Entry<Character, Integer> entry : hashMap2.entrySet()) {
                if(entry.getValue() != hashMap1.get(entry.getKey())) {
                    result = false;
                    break;
                }
            }
        }
        if(result == false) {
            System.out.println("Not Anagrams");
        } else {
            System.out.println("Anagrams");
        }
        sc.close();
    }
}