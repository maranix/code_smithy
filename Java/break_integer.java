import java.util.*;

public class break_integer {
    
    public static void main(String[] args) {
        int n,s,temp=0,d;
        
        System.out.println("Enter an integer: ");
        Scanner scan = new Scanner(System.in);
        n=scan.nextInt();

        //Reverse the input number
        while (n!=0) {
            s=n%10;
            temp=s+temp*10;
            n=n/10;
        }

        //Print the remainder of reverse number followed by a blank space and continue until the value of reverse number is 0
        while (temp!=0) {
            d=temp%10;
            System.out.print(d);
            System.out.print(" ");
            temp=temp/10;
        }
    }
}