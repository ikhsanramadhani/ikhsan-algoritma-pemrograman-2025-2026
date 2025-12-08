import java.util.Scanner;

public class nimArray {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan NIM: ");
        String nim = input.nextLine();

        int[] digits = new int[nim.length()];

        // Pisahkan digit
        for (int i = 0; i < nim.length(); i++) {
            digits[i] = Character.getNumericValue(nim.charAt(i));
        }

        System.out.print("Array digit: ");
        for (int d : digits) System.out.print(d + " ");
        System.out.println();

        // Hitungan
        int total = 0, max = digits[0], min = digits[0];
        for (int d : digits) {
            total += d;
            if (d > max) max = d;
            if (d < min) min = d;
        }
        double rata = (double) total / digits.length;

        // Reverse
        System.out.print("Reverse array: ");
        for (int i = digits.length - 1; i >= 0; i--) {
            System.out.print(digits[i] + " ");
        }
        System.out.println();

        System.out.println("Total digit: " + total);
        System.out.println("Nilai maksimum: " + max);
        System.out.println("Nilai minimum: " + min);
        System.out.println("Rata-rata digit: " + rata);
    }
}