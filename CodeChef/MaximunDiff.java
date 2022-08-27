import java.util.Scanner;

public class MaximunDiff {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while (t-- > 0) {
                int n = sc.nextInt();
                int m = sc.nextInt();

                long a = 0;
                long b = 0;

                if (m < 2 * n) {
                    System.out.println(m + " " + m);
                } else if (m % n == 0) {
                    System.out.println(m + " " + n);
                } else {

                    int x = m / 2;

                    if (m >= 2 * n) {
                        x = 2 * n;
                    }

                    long dif = 0;

                    for (long i = n; i < x; i++) {

                        long d = m / i;
                        long cd = (i * d) - i;

                        if (cd > dif) {
                            a = i;
                            b = i * d;
                            dif = cd;
                        }
                    }
                    System.out.println(a + " " + b);
                }

            }
        }
}