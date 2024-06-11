/*
Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

Example 1:

Input:
5
111 222 333 444 555

Output:
1
Example 2:

Input:
3
121 131 20
 
Output:
0

Explanation:
20 is not a palindrome hence the output is 0.
*/

import java.util.*;

class PalindromicArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            GfG g = new GfG();
            System.out.println(g.palinArray(a, n));
        }
        sc.close();
    }
}

class GfG {
    public static int palinArray(int[] a, int n) {
        for (int i = 0; i < n; i++) {
            if (!isPalindrom(a[i])) {
                return 0; 
            }
        }
        return 1;
    }

    public static boolean isPalindrom(int num) {
        int result= num;
        int reversed = 0;
        while (num > 0) {
            int rem = num % 10;
            reversed = reversed * 10 + rem;
            num = num / 10;
        }
        return result == reversed;
    }
}
