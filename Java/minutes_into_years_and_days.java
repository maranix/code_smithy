import java.util.Scanner;
public class minutes_into_years_and_days {

    public static void main(String[] Strings) {


        double minutesInAYear = 365 * 24 * 60;

        Scanner scan = new Scanner(System.in);

        System.out.print("Input the number of minutes: ");

        double min = scan.nextDouble();
        scan.close();

        long years = (long) (min / minutesInAYear);
        int days = (int) (min / 60 / 24) % 365;

        System.out.println((int) min + " minutes is approximately " + years + " years and " + days + " days");
    }
}