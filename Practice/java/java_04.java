// Largest/Smallest value in array
import java.util.*;

public class java_04 {
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int n;
        n = obj.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = obj.nextInt();
        }

        int max = Arrays.stream(arr).max().getAsInt();
        int min = Arrays.stream(arr).min().getAsInt();

        System.out.println("Maximum is: " + max);
        System.out.println("Minimum is: " + min);

        obj.close();
    }
}
