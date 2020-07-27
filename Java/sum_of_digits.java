import java.util.*;

public class sum_of_digits{

    public static void main(String[] args) {
        int n,d,sum=0;
        System.out.println("Enter an integer between 0-1000");
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        scan.close();

        if (n<=1000) {
            while (n!=0) {
                d=n%10;
                sum=sum+d;
                n=n/10;
            }
        } else {
                System.out.println("Input integer is out of range.....");
        }

        System.out.println("Sum of digits: " + sum);
    }
}