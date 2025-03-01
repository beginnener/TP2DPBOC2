import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        ArrayList<Petshop> petshopList = new ArrayList<>(); // inisialisasi list
        Scanner scanner = new Scanner(System.in);

        List<Baju> listbaju = new ArrayList<>();
        listbaju.add(new Baju("Kucing", "M", "CatHolic", "Dress", "Linen", "Putih", "baju", 170000, 50));
        listbaju.add(new Baju("Kucing", "L", "CatHolic", "Dress", "Linen", "Putih", "baju", 180000, 70));
        listbaju.add(new Baju("Kucing", "S", "CatHolic", "Dress", "Linen", "Putih", "baju", 170000, 50));
        listbaju.add(new Baju("Anjing", "L", "Dogtober", "Kaos", "Cotton", "Hijau", "t-shirt", 200000, 40));
        listbaju.add(new Baju("Anjing", "XL", "Dogtober", "Kaos", "Cotton", "Hijau", "t-shirt", 208000, 40));
        
        Baju.Display(listbaju);        

        scanner.close();
    }
}