/*
Task
Read two integers from STDIN and print three lines where:

The first line contains the sum of the two numbers.
The second line contains the difference of the two numbers (first - second).
The third line contains the product of the two numbers.
*/

import java.util.Scanner;

class arithmetic{
    public static void main(String[] args) {
        int a, b;
        System.out.println("Enter an integer a: ");
        Scanner scan= new Scanner(System.in);
        a=scan.nextInt();
        System.out.println("Enter an integer b: ");
        b=scan.nextInt();

        System.out.println("Sum: " + (a+b));
        System.out.println("Difference: " + (a-b));
        System.out.println("Multiplication: " + (a*b));
    }
}