//import java.util.*;

//import sun.tools.java.Scanner;

/**
 * array
 */
// public class array {

//     private static Scanner sc;
//     public static void main(String[] args) {
//         sc = new Scanner(System.in);
//         int arr1[] = new int[10], arr2[] = new int[10];
//         int count = 0;
//         System.out.println("\nEnter the element in array1: ");
//         for (int i = 0; i < 10; i++) {
//             System.out.print("Enter the numer: ");
//             arr1[i] = sc.nextInt();
//         }
//         System.out.println("\nEnter the element in array2: ");
//         for (int i = 0; i < 10; i++) {
//             System.out.print("Enter the numer: ");
//             arr2[i] = sc.nextInt();
//         }
//         for (int i = 0; i < 10; i++) {
//             for (int j = 0; j < 10; j++) {
//                 if (arr1[i] == arr2[j]) {
//                     count++;
//                 }
//             }
//         }
//         System.out.printf("There are %d common element in these arrays.", count);
//     }
// }

/**
 * array
 */
// public class array {

//     private static Scanner in;
//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int size,sum = 0;
//         System.out.print("Enter the size of array: ");
//         size = in.nextInt();
//         int arr[] = new int[size];
//         for (int i = 0; i < size; i++) {
//             System.out.printf("Enter the element in index %d: ", i);
//             arr[i] = in.nextInt();
//         }
//         for (int i : arr) {
//             sum += i;
//         }
//         System.out.printf("The summation of array is %d.", sum);
//     }
// }

/**
 * array
 */
// public class array {

//     private static Scanner in;

//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int size;
//         float avg;
//         System.out.print("Enter the size of array: ");
//         size = in.nextInt();
//         int arr[] = new int[size];
//         for (int i = 0; i < size; i++) {
//             System.out.printf("Enter the element in index %d: ", i);
//             arr[i] = in.nextInt();
//         }
//         avg = average(arr);
//         System.out.printf("The average is %.2f", avg);
//     }

//     public static float average(int[] arr) {
//         float sum = 0, count = 0;
//         float avg;
//         for (int i : arr) {
//             sum += i;
//             count++;
//         }
//         avg = sum / (count);
//         return avg;
//     }
// }

/**
 * array
 */
// public class array {

//     private static Scanner in;
//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int index, value;
//         int[] arr = { 25, 14, 56, 15, 36, 56, 77, 18, 29, 49 };
//         System.out.print("Enter the value that you want to input: ");
//         value = in.nextInt();
//         System.out.print("Enter your desire index: ");
//         index = in.nextInt();
//         System.out.println("Original array: " + Arrays.toString(arr));
//         for (int i = arr.length - 1; i > index; i--) {
//             arr[i] = arr[i - 1];
//         }
//         arr[index] = value;
//         System.out.print("New array: \t" + Arrays.toString(arr));
//     }
// }

/**
 * array
 */
// public class array {

//     private static Scanner in;
//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int size,ctr = 0;
//         System.out.print("\nEnter the size of array: ");
//         size = in.nextInt();
//         int arr[] = new int[size];
//         for (int i = 0; i < size; i++) {
//             System.out.printf("Enter the number in index %d: ", i + 1);
//             arr[i] = in.nextInt();
//         }
//         for (int j = 0; j < size; j++) {
//             if (arr[j] % 2 == 0) {
//                 ctr++;
//             }
//         }
//         System.out.printf("In array, there are %d even numbers and %d odd numbers.", ctr,arr.length-ctr);
//     }
// }

/**
 * array
 */
// public class array {

//     private static Scanner in;

//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int size,min ,max ;
//         System.out.print("Enter the size of array: ");
//         size = in.nextInt();
//         int arr[] = new int[size];
//         for (int i = 0; i < size; i++) {
//             System.out.print("Enter the number: ");
//             arr[i] = in.nextInt();
//         }
//         min = arr[0];
//         max = arr[0];
//         for (int i : arr) {
//             if (min > i) {
//                 min = i;
//             }
//             if (max < i) {
//                 max = i;
//             }
//         }
//         System.out.printf("\nThe maximum value is %d and the minimum value is %d.\n", max, min);
//         System.out.printf("The different between the minimum and the maximum is %d.\n", max - min);
//     }
// }

/**
 * array
 */
// public class array {

//     private static Scanner in;
//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int size,j = 0,k = 0;
//         System.out.print("Enter the size of array: ");
//         size = in.nextInt();
//         int arr1[] = new int[size], arr2[] = new int[size], arr3[] = new int[size];
//         for (int i = 0; i < size; i++) {
//             System.out.print("Enter the number: ");
//             arr1[i] = in.nextInt();
//         }
//         for (int i = 0; i < size; i++) {
//             if (arr1[i] % 2 == 0) {
//                 arr2[j] = arr1[i];
//                 j++;
//             } else {
//                 arr3[k] = arr1[i];
//                 k++;
//             }
//         }
//         System.out.println("The original arrays: " + Arrays.toString(arr1));
//         System.out.println("The even arrays: " + Arrays.toString(arr2));
//         System.out.println("The odd arrays: " + Arrays.toString(arr3));
//     }
// }

/**
 * array
 */
// sorting arrays accending
// public class array {

//     private static Scanner in;

//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int size, tmp;
//         System.out.print("Enter the size of arrays: ");
//         size = in.nextInt();
//         int[] arr = new int[size];
//         for (int i = 0; i < size; i++) {
//             System.out.print("Enter the number: ");
//             arr[i] = in.nextInt();
//         }
//         for (int i = 0; i < size; i++) {
//             for (int j = i + 1; j < size; j++) {
//                 if (arr[j] < arr[i]) {
//                     tmp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = tmp;
//                 }
//             }
//         }
//         System.out.print("The arrays in accending order: " + Arrays.toString(arr));
//     }
// }

/**
 * array
 */
/* sorting arrays decending */
// public class array {

//     private static Scanner in;

//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int size, tmp;
//         System.out.print("Enter the size of array: ");
//         size = in.nextInt();
//         int[] arr = new int[size];
//         for (int i = 0; i < size; i++) {
//             System.out.print("Enter the number: ");
//             arr[i] = in.nextInt();
//         }
//         System.out.println("\nThe original array: " + Arrays.toString(arr));
//         for (int i = 0; i < size; i++) {
//             for (int j = i + 1; j < size; j++) {
//                 if (arr[j] > arr[i]) {
//                     tmp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = tmp;
//                 }
//             }
//         }
//         System.out.println("\nThe array after sorting(decending): " + Arrays.toString(arr));
//         for (int i = 0; i < size; i++) {
//             for (int j = i + 1; j < size; j++) {
//                 if (arr[j] < arr[i]) {
//                     tmp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = tmp;
//                 }
//             }
//         }
//         System.out.println("\nThe array after sorting(acending):  " + Arrays.toString(arr));
//     }
// }

/**
 * array
 */
// public class array {

//     private static Scanner in;

//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int size, min, max, count = 0;
//         float sum = 0, average;
//         System.out.print("Enter the size of array: ");
//         size = in.nextInt();
//         int arr[] = new int[size];
//         for (int i = 0; i < size; i++) {
//             System.out.print("Enter the number: ");
//             arr[i] = in.nextInt();
//         }
//         min = arr[0];
//         max = arr[0];
//         for (int i = 0; i < size; i++) {
//             if (max < arr[i]) {
//                 max = arr[i];
//             }
//             if (min > arr[i]) {
//                 min = arr[i];
//             }
//         }
//         for (int i = 0; i < size; i++) {
//             if (arr[i] == max || arr[i] == min) {
//                 continue;
//             } else {
//                 sum += arr[i];
//                 count ++;
//             }
//         }
//         average = sum / count;
//         System.out.printf("The average of sum except min and max is %.2f.", average);
//     }
// }

/**
 * array
 */
// public class array {

//     public static int removeDuplicateElements(int arr[], int n) {
//         if (n == 0 || n == 1) {
//             return n;
//         }
//         int[] temp = new int[n];
//         int j = 0;
//         for (int i = 0; i < n - 1; i++) {

//             if (arr[i] != arr[i + 1]) {
//                 temp[j++] = arr[i];
//             }
//         }
//         temp[j++] = arr[n - 1];
//         // Changing original array  
//         for (int i = 0; i < j; i++) {
//             arr[i] = temp[i];
//         }
//         return j;
//     }

//     private static Scanner in;

//     public static void main (String[] args) {  
//         in   = new Scanner(System.in);
//         int length,count = 0;
//         System.out.print("Enter the lenght of array: ");
//         length = in.nextInt();
//         int arr[] = new int[length];
//         for (int i = 0; i < length; i++) {
//             System.out.print("Enter the number: ");
//             arr[i] = in.nextInt();
//         }
//         for (int i = 0; i < length; i++) {
//             for (int j = 0; j < length; j++) {
//                 if (arr[i] == arr[j]) {
//                     count++;
//                 }
//             }
//         }
//         System.out.printf("There are %d duplicated.\n", count);
//         System.out.println("After remove the duplicate element from array.");
//         length = removeDuplicateElements(arr, length);
//         // printing array elements
//         for (int i = 0; i < length; i++)
//             System.out.print(arr[i] + " ");
//     }  
// }  

/**
 * array
 */
// public class array {
//     static void removeDups(int[] arr, int n) {
//         // Hash map which will store the
//         // elements which has appeared previously.
//         HashMap<Integer, Boolean> mp = new HashMap<>();
//         for (int i = 0; i < n; ++i) {
//             // Print the element if it is not
//             // there in the hash map
//             if (mp.get(arr[i]) == null)
//                 System.out.print(arr[i] + " ");
//             // Insert the element in the hash map
//             mp.put(arr[i], true);
//         }
//     }
//     static int countDistinct(int arr[], int n) {
//         int res = 1;
//         // Pick all elements one by one
//         for (int i = 1; i < n; i++) {
//             int j = 0;
//             for (j = 0; j < i; j++)
//                 if (arr[i] == arr[j])
//                     break;
//             // If not printed earlier,
//             // then print it
//             if (i == j)
//                 res++;
//         }
//         return res;
//     }
//     private static Scanner in;
//     // Driver Code
//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int length, count = 0;
//         System.out.print("Enter the lenght of array: ");
//         length = in.nextInt();
//         int arr[] = new int[length];
//         for (int i = 0; i < length; i++) {
//             System.out.print("Enter the number: ");
//             arr[i] = in.nextInt();
//         }
//         System.out.printf("There are %d distinct elements.\n", countDistinct(arr, length));
//         for (int i = 0; i < length; i++) {
//             for (int j = i + 1; j < length; j++) {
//                 /* If duplicate found then increment count by 1 */
//                 if (arr[i] == arr[j]) {
//                     count++;
//                     break;
//                 }
//             }
//         }
//         System.out.printf("There are %d duplicate elements.\n", count);
//         System.out.println("After remove the duplicate element from array.");
//         removeDups(arr, length);
//     }
// }

/**
 * array
 */
// public class array {

//     private static Scanner in;

//     public static void main(String[] args) {
//         in = new Scanner(System.in);
//         int i = 1, num, n, p;
//         while (i != 0) {
//             System.out.println("\n1.Find factorial.");
//             System.out.println("2.Find power.");
//             System.out.println("3.Find sum suit.");
//             System.out.println("4.Find sum square.");
//             System.out.println("5.ount digit and sum digit.");
//             System.out.println("6.Exit.");
//             System.out.print("Enter your option: ");
//             n = in.nextInt();
//             if (n == 6) {
//                 System.out.print("Exiting the program ......\n");
//                 System.exit(0);
//             } else if (n >=7){
//                 System.out.println("Your input is invalid, please input the valid option !!!!!!!\n");
//                 System.exit(0);
//             } else {
//                 System.out.print("Enter the number: ");
//                 num = in.nextInt();
//                 switch (n) {
//                     case 1:
//                         System.out.printf("%d factorial is %d\n", num, factorial(num));
//                         break;
//                     case 2:
//                         System.out.print("Enter the power that you want to raise: ");
//                         p = in.nextInt();
//                         System.out.printf("%d raise to the power of %d is %d.\n", num, p, power(num, p));
//                         break;
//                     case 3:
//                         System.out.printf("The sum suit from 1 to %d is %d.\n", num, sumSuit(num));
//                         break;
//                     case 4:
//                         System.out.printf("The sum square from 1 to %d is %d.\n", num, sumSquare(num));
//                         break;
//                     case 5:
//                         System.out.printf("%d has %d digit(s) and sum digit is %d.\n", num, countDigit(num),
//                                 sumDigit(num));
//                         break;
//                     default:
//                         break;
//                 }
//             }
//         }
//     }

//     private static long factorial(int num) {
//         if (num == 1) {
//             return 1;
//         } else {
//             return factorial(num - 1) * num;
//         }
//     }

//     private static long power(int num, int power) {
//         if (power != 0) {
//             return power(num, power - 1) * num;
//         } else {
//             return 1;
//         }
//     }

//     private static int sumSuit(int num) {
//         if (num == 0) {
//             return 0;
//         } else {
//             return sumSuit(num - 1) + num;
//         }
//     }

//     private static int sumSquare(int num) {
//         if (num == 0) {
//             return 0;
//         } else {
//             return sumSquare(num - 1) + (num * num);
//         }
//     }

//     private static int countDigit(int num) {
//         if (num == 0) {
//             return 0;
//         } else {
//             return 1 + countDigit(num / 10);
//         }
//     }
//     private static int sumDigit(int num) {
//         if (num == 0) {
//             return 0;
//         } else {
//             return (num % 10) + sumDigit(num / 10);
//         }
//     }
// }