//Part 1 - 
import java.util.Scanner;

public class aKalamkar3Part1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Create variables of different data types
        int a;
        double b;
        char c;
        String d;

        // User inputs for each variable
        System.out.print("Enter a integer: ");
        a = scanner.nextInt();
        
        System.out.print("Enter a double value: ");
        b = scanner.nextDouble();
        
        scanner.nextLine(); // Consume the newline left-over
        System.out.print("Enter a character: ");
        c = scanner.nextLine().charAt(0);
        
        System.out.print("Enter a string: ");
        d = scanner.nextLine();
        
        //Conditional display
        if (a > 1) {
            System.out.println("Integer variable is greater than 1");
        } else if(a < 0) {
            System.out.println("Integer cannot be less than 0");
        }
        else {
            System.out.println("Integer variable is not greater than 1");
        }

        if (b < 1.0) {
            System.out.println("Double variable is less than 1.0");
        } else {
            System.out.println("Double variable is not less than 1.0");
        }

        if (c != 'a') {
            System.out.println("Character variable does not match letter 'a'");
        } else {
            System.out.println("Character is the same as letter 'a'");
        }
        
        if (d.length() > 6) {
            System.out.println("String length is greater than 6");
        } else {
            System.out.println("String length is not greater than 6");
        }
        scanner.close();
    }
}


