// Concat string 
import java.util.Scanner;

public class java_05 {
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        String s, n;
        s = obj.nextLine();
        n = obj.nextLine();

        System.out.println(s+n);
        obj.close();
    }
}
