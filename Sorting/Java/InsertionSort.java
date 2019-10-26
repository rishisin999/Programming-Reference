import java.util.Arrays;

public class InsertionSort {
    public static <T extends Comparable<T>> void sort(T[] array) {
        for (int i = 1; i < array.length; i++) {
            T item = array[i];
            int index = i;
            while (index > 0 && array[index - 1].compareTo(item) > 0) {
                array[index] = array[--index];
            }
            array[index] = item;
        }
    }

    public static void main(String[] args) {
        Integer[] input = new Integer[]{4, 5, 3, 9, 2};
        System.out.println("Before sort = " + Arrays.toString(input));
        sort(input);
        System.out.println("After sort = " + Arrays.toString(input));
    }
}
