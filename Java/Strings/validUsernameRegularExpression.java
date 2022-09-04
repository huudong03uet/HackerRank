import java.util.*;

public class validUsernameRegularExpression {
    public static boolean isAlpha(char c) {
        if (((int) c >= (int) 'a' && (int) c <= 'z') || ((int) c >= (int) 'A' && (int) c <= 'Z')) return true;
        return false;
    }

    public static boolean checkValidName(String name) {
        if (name.length() > 30 || name.length() < 8) return false;
        if (!isAlpha(name.charAt(0))) return false;
        for (int i = 1; i < name.length(); i++) {
            if (isAlpha(name.charAt(i)) == false &&
                    name.charAt(i) != '_' &&
                    ((int) name.charAt(i) > '9' || (int) name.charAt(i) < '0'))

                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int number_ = sc.nextInt();
        String s = sc.nextLine();
        for (int i = 0; i < number_; i++) {
            s = sc.nextLine();
            if (checkValidName(s) == true) {
                System.out.println("Valid");
            } else {
                System.out.println("Invalid");
            }
        }
        sc.close();
    }
}