package JavaSololearnProject.Time_Converter;

import java.util.Scanner;

public class TimeConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int days = scanner.nextInt();
        int sec = days * (3600 * 24);
        System.out.println(sec);
        scanner.close();
    }
}