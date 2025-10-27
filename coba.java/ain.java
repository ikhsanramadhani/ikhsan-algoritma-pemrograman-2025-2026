import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan angka pertama : ");
        int a = sc.nextInt();
        System.out.print("Masukkan angka kedua : ");
        int b = sc.nextInt();

        if(a>b)
            System.out.println("Angka pertama lebih besar dari angka kedua");
         else if(a<b)
            System.out.println("Angka kedua lebih besar dari angka pertama");
         else 
            System.out.println("Kedua angka sama besar");

         System.out.println("apakah keduanya sama?" +(a==b));
    }
    
