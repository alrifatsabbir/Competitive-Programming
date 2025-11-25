// Solution NO: 6
/*
    Problem Code: java-output-formatting
    Problem Name: Java Output Formatting
    Problem Link: https://www.hackerrank.com/challenges/java-output-formatting/problem
    Description: Java's System.out.printf function can be used to print formatted output. The purpose of this exercise is to test your 
    understanding of formatting output using printf. To get you started, a portion of the solution is provided for you in the editor; 
    you must format and print the input to complete the solution.
*/

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            @SuppressWarnings("resource")// this is used to ignore resource leak warning for Scanner
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                System.out.printf("%-15s%03d%n", s1,x);
            }
            System.out.println("================================");

    }
}



