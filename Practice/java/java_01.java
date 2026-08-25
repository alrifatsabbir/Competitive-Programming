// String Reverse
import java.util.Scanner;

class java_01{
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        String s;
        s = obj.nextLine();
        String reverse = new StringBuilder(s).reverse().toString();
        System.out.println(reverse);
        obj.close();
    }
}