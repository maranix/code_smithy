/*
Task
Given an integer, n and perform the following conditional actions:

If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird
*/

import java.util.Scanner;

/**
 * ifelse oddeven
 */
public class ifelse_oddeven {
    public static void main(String[] args) {
    
    int n;
    System.out.println("Enter an integer: ");
    Scanner in=new Scanner(System.in);
    n=in.nextInt();
    in.close();
    if (n%2!=0) {
        System.out.println("Weird");
    } else if (n>=2 && n<=5) {
            System.out.println("Not Weird");
        } else if (n>=6 && n<=20) {
                System.out.println("Weird");
            } else if (n>20) {
                    System.out.println("Not Weird");
        }  
    }
}