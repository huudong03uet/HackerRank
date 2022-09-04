import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class javaLambdaExpressions {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int number_ = sc.nextInt();
        for(int i = 0; i < number_; i++) {
            int index = sc.nextInt();
            int number = sc.nextInt();
            if(index == 1) {
                if(number % 2 == 0) {
                    System.out.println("EVEN");
                } else {
                    System.out.println("ODD");
                }
            } else if(index == 2) {
                boolean result = true;
                if(number < 2) result = false;
                else if(number == 3 || number == 2) result = true;
                else {
                    for(int j = 2; j <= Math.sqrt(number); j++) {
                        if(number % j == 0) {
                            result = false;
                            break;
                        }
                    }
                }
                if(result == true) {
                    System.out.println("PRIME");
                } else {
                    System.out.println("COMPOSITE");
                }
            } else if(index == 3) {
                String s = String.valueOf(number);
                boolean isPalindrome = true;
                for(int j = 0; j < s.length() / 2; j++) {
                    if(s.charAt(j) != s.charAt(s.length() - j - 1)) {
                        isPalindrome = false;
                        break;
                    }
                }
                if(isPalindrome == true) {
                    System.out.println("PALINDROME");
                } else {
                    System.out.println("NOT PALINDROME");
                }
            }
        }
        sc.close();
    }
}