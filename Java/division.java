/*
Task
Read two integers and print two lines. The first line should contain integer division, a // b . The second line should contain float division, a / b.
*/

import java.util.Scanner;

class division{
    public static void main(String[] args) {
        int a,b;
        Scanner scan= new Scanner(System.in);
        System.out.println("Enter the value of a and b");
        a=scan.nextInt();
        b=scan.nextInt();
        scan.close();

        System.out.println("Integer division: " + (a/b));
        System.out.println("Floating division: " + ((float)a/b));
    }
}