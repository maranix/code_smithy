import java.util.*;

public class temp_conversion {
    public static void main(String[] args) {
        float temp_input;

        System.out.println("Input a degree in Fahrenheit: ");
        Scanner scan = new Scanner(System.in);
        temp_input = scan.nextFloat();
        scan.close();

        System.out.println(temp_input + " degree Fahrenheit is equal to " + (5*(temp_input-32)/9) + " degree in celsius.");
    }
}