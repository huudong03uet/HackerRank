import java.util.Scanner;

class Solution{

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            String IP = in.next();
            System.out.println(IP.matches(new MyRegex().pattern));
        }
        in.close();

    }
}

//Write your code here
class MyRegex {
    String pattern = "^(((2[0-4][0-9]|25[0-5]|[01]?[0-9]{1,2})\\.){3})(25[0-5]|2[0-4][0-9]|[01]?[0-9]{1,2})$";
}