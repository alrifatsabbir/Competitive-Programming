// Exchange value in two variable without using third variable
import java.util.Scanner;

public class java_03 {
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int a;
        int b;
        a = obj.nextInt();
        b = obj.nextInt();

        System.out.println("Input Values for a= "+a+", b= "+b);

        a = a + b;
        b = a - b;
        a = a - b;

        System.out.println("Output Values for a= "+a+", b= "+b);

        obj.close();
    }    
}
