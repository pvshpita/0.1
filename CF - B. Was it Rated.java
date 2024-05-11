import java.util.Scanner;
public class sike {
    public static void main(String[] args) {
        Scanner sure = new Scanner(System.in);
        int n = sure.nextInt();

        if (n == 15 || n == 20 || n == 21)
            System.out.println("NO");
        else
            System.out.println("YES");

        sure.close();
    }
}
