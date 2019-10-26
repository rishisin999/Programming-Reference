import java.util.Arrays;

public class SelectionSort {
    public static void sort(Integer[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < array.length; j++) {
                if (array[j] < array[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                swap(array, i, minIndex);
            }
        }
    }

    private static void swap(Integer[] array, int a, int b) {
        Integer temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }

    public static void main(String[] args) {
        Integer[] input = new Integer[]{4, 5, 3, 9, 2};
        System.out.println("Before sort = " + Arrays.toString(input));
        sort(input);
        System.out.println("After sort = " + Arrays.toString(input));
    }
}
