import java.util.*;

class Solution {

    public static void main(String[] argh) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            String input = sc.next();
            //Complete the code
            Stack<Character> st = new Stack<>();
            for (int i = 0; i < input.length(); i++) {
                if (input.charAt(i) == '{' || input.charAt(i) == '(' || input.charAt(i) == '[') {
                    st.push(input.charAt(i));
                } else {
                    if (st.size() == 0) {
                        st.push('a');
                        break;
                    } else {
                        if ((st.lastElement() == '(' &&  input.charAt(i) == ')') 
                                || (st.lastElement() == '{' &&  input.charAt(i) == '}') 
                                || (st.lastElement() == '[' &&  input.charAt(i) == ']')) {
                            st.pop();
                        } else {
                            break;
                        }
                    }
                }
            }
            if (st.size() == 0) {
                System.out.println("true");
            } else {
                System.out.println("false");
            }
        }
        sc.close();
    }
}