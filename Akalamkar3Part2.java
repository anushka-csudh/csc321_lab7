/* Name: Anushka Kalamkar
* Student ID: 213022136
* CSC321 Programming languages */

import java.util.Scanner;

public class AKalamkar3Part2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num;

        //User entering the input values from 1-5
        do {

            System.out.print("Enter a number between 1 and 5 (inclusive): ");
            num = scanner.nextInt();

            if (num < 1 || num > 5) {
                System.out.println("Number should be in the range of 1-5. Please try again.");
            }
        } while (num < 1 || num > 5);

        // Prize winning
        String prize;
        switch (num) {
            case 1:
                prize = "A samsung smartphone";
                break;
            case 2:
                prize = "a weekend getaway to Hawaii";
                break;
            case 3:
                prize = "A cute orange tabby kitten!";
                break;
            case 4:
                prize = "A 500KG drum of chocolate ice cream!";
                break;
            case 5:
                prize = "A shiny new Kia!";
                break;
            default:
                prize = "";
                break;
        }

        if (prize != "") {
            for (int i = 0; i < num; i++) {
                System.out.println("Congratulations! You won " + prize);
            }
        }

        scanner.close();
    }
}

