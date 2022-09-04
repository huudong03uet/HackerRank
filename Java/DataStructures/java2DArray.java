import java.io.*;

import java.util.*;




public class java2DArray {
    public static void main(String[] args) throws IOException {
        
        Scanner sc = new Scanner(System.in);

        List<List<Integer>> arr = new ArrayList<>();
        for(int i = 0; i < 6; i++) {
            arr.add(new ArrayList<>());
            for(int j = 0; j < 6; j++){
                int tmp = sc.nextInt();
                arr.get(i).add(tmp);
            }
        }
        int result = -1000;
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                result = Math.max(result, arr.get(i).get(j) + arr.get(i).get(j + 1) + arr.get(i).get(j + 2) +
                        arr.get(i + 1).get(j + 1) + arr.get(i + 2).get(j) + arr.get(i + 2).get(j + 1) + arr.get(i + 2).get(j + 2));
            }
        }
        System.out.println(result);
        sc.close();
    }
}
