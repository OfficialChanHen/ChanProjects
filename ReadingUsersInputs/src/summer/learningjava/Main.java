package summer.learningjava;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = scanner.nextLine(); // Use another scan line without assignment for "enter" button.

        System.out.println("Your name is " + name);

        scanner.close();
    }
}
