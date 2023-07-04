import java.util.Random;

public class Main {
    public static void main(String[] args) {
        int x = 0;
        Random generate = new Random();
        int r= Integer.parseInt(args[0]);

        for (int i=0;i<r;i++){
            int num = generate.nextInt(60);
            System.out.println(num);

        }
    }
}