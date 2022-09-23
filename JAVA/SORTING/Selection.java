//package JAVA.SORTING;

import java.util.*;

class Selection {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }

        for (int i = 0; i < n - 1; i++) {
            int curr = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[curr] > arr[j]) {
                    curr = j;
                }
            }

            int temp = arr[curr];
            arr[curr] = arr[i];
            arr[i] = temp;

        }
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i] + " ");
        }

    }
}
