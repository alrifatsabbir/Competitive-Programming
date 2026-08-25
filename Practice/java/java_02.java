// String Palindrome
import java.util.Scanner;

public class java_02 {
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        String s;
        s = obj.nextLine();
        String reverse = new StringBuilder(s).reverse().toString();
        if (s.equals(reverse)) {
            System.out.println("Yes - Palindrome");
        }else{
            System.out.println("No - It's not");
        }
        obj.close();
    }
}
