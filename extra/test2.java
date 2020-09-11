package extra;
import java.util.*;

public class test2 {
    private static Scanner in;

    public static void main(String[] args) {
        in = new Scanner(System.in);
        int i = 1, num, n, p;
        while (i != 0) {
            System.out.println("\n1.Find factorial.");
            System.out.println("2.Find power.");
            System.out.println("3.Find sum suit.");
            System.out.println("4.Find sum square.");
            System.out.println("5.ount digit and sum digit.");
            System.out.println("6.Exit.");
            System.out.print("Enter your option: ");
            n = in.nextInt();
            System.out.println();
            if (n == 6) {
                System.out.print("Exiting the program ......\n");
                System.exit(0);
            } else if (n >= 7) {
                System.out.println("Your input is invalid, please input the valid option !!!!!!!\n");
                System.exit(0);
            } else {
                System.out.print("Enter the number: ");
                num = in.nextInt();
                switch (n) {
                    case 1:
                        System.out.printf("%d factorial is %d\n", num, factorial(num));
                        break;
                    case 2:
                        System.out.print("Enter the power that you want to raise: ");
                        p = in.nextInt();
                        System.out.printf("%d raise to the power of %d is %d.\n", num, p, power(num, p));
                        break;
                    case 3:
                        System.out.printf("The sum suit from 1 to %d is %d.\n", num, sumSuit(num));
                        break;
                    case 4:
                        System.out.printf("The sum square from 1 to %d is %d.\n", num, sumSquare(num));
                        break;
                    case 5:
                        System.out.printf("%d has %d digit(s) and sum digit is %d.\n", num, countDigit(num),
                                sumDigit(num));
                        break;
                    default:
                        break;
                }
            }
        }
    }

    private static long factorial(int num) {
        if (num == 1) {
            return 1;
        } else {
            return factorial(num - 1) * num;
        }
    }

    private static long power(int num, int power) {
        if (power != 0) {
            return power(num, power - 1) * num;
        } else {
            return 1;
        }
    }

    private static int sumSuit(int num) {
        if (num == 0) {
            return 0;
        } else {
            return sumSuit(num - 1) + num;
        }
    }

    private static int sumSquare(int num) {
        if (num == 0) {
            return 0;
        } else {
            return sumSquare(num - 1) + (num * num);
        }
    }

    private static int countDigit(int num) {
        if (num == 0) {
            return 0;
        } else {
            return 1 + countDigit(num / 10);
        }
    }

    private static int sumDigit(int num) {
        if (num == 0) {
            return 0;
        } else {
            return (num % 10) + sumDigit(num / 10);
        }
    }
}
