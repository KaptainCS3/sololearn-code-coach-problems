package JavaSololearnProject.Loan_Calculator;

import java.util.Scanner;

//Author: KaptainCS3
//Date Fri 27 May 2022
public class LoadCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int amount = scanner.nextInt(), i;
        for (i = 0; i <= 2; i++) {
            amount -= (0.1 * amount);
        }
        System.out.println("Loan pay is :" + amount);
    }
}
