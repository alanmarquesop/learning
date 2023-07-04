import co.alan.test.User;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        User login = new User();
        Scanner scanner =new Scanner(System.in);
        String name =scanner.nextLine();
        System.out.println(name);
    }
}