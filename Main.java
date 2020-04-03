import java.util.Scanner;
import static sun.nio.ch.IOStatus.EOF;
public class Main {
    static int Max(int n, int a[]) {
        int sum = 0, j = 0;
        for (int i = 0; i < n; i++) {
            if (j > 0) {
                j += a[i];
            }
            else j = a[i];
            if (j > sum) {
                sum = j;
            }
        }
        return sum;
    }
    public static void main(String[] args) {
            int n;
            int a[]= new int[10000];
            Scanner sc =  new Scanner(System.in);
            n=sc.nextInt();
            while (n != EOF)
            {
                for (int i = 0; i < n; i++) {
                    a[i]=sc.nextInt();
                }
               System.out.println(Max(n,a));
                n=sc.nextInt();
            }
        }
    }
