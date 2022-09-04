import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class javaList {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        List<Integer> list = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int number_ = sc.nextInt();
        for(int i = 0;  i < number_; i++) {
            int tmp = sc.nextInt();
            list.add(tmp);
        }
        number_ = sc.nextInt();
        for(int i = 0; i < number_; i++) {
            String operator = sc.next();
            if(operator.compareTo("Insert") == 0) {
                int x = sc.nextInt();
                int y = sc.nextInt();
                list.add(x, y);
            } else if(operator.compareTo("Delete") == 0) {
                int x = sc.nextInt();
                list.remove(x);
            }
            
        }
        for(int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + " ");
        }
        sc.close();
    }
}