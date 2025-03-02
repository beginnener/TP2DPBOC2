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
        System.out.println("Masukan input dengan urutan <untuk> <size> <merk> <jenis> <bahan> <warna> <nama produk, gunakan tanda kutip dua jika nama memiliki spasi> <harga> <stok>");
        System.out.println("Ketik out untuk keluar dari program");
        
        String input = "";
        String untuk, size, jenis, merk, bahan, warna, nama;
        int harga, stok;
        
        while (!input.equals("out")) {
            System.out.print("Add to Petshop> ");
            input = scanner.nextLine();
            
            Scanner ss = new Scanner(input);
            String command;
            
            if (ss.hasNext()) {
                command = ss.next();
            } else {
                continue;
            }

            if (command.equals("out")) {
                break;
            } else if (command.equals("add")) {
                if (ss.hasNext()) untuk = ss.next();
                else continue;
                if (ss.hasNext()) size = ss.next();
                else continue;
                if (ss.hasNext()) merk = ss.next();
                else continue;
                if (ss.hasNext()) jenis = ss.next();
                else continue;
                if (ss.hasNext()) bahan = ss.next();
                else continue;
                if (ss.hasNext()) warna = ss.next();
                else continue;
                
                if (ss.hasNext("\"")) {
                    ss.next();
                    if (ss.hasNext()) nama = ss.nextLine().replace("\"", "").trim();
                    else continue;
                } else {
                    nama = ss.next();
                }
                
                if (ss.hasNextInt()) harga = ss.nextInt();
                else continue;
                if (ss.hasNextInt()) stok = ss.nextInt();
                else continue;
                
                listbaju.add(new Baju(untuk, size, merk, jenis, bahan, warna, nama, harga, stok));
                System.out.println("Baju berhasil ditambahkan!");
                Baju.Display(listbaju);
            } else if (command.equals("show")) {
                Baju.Display(listbaju);
            } else {
                System.out.println("Perintah tidak dikenali! Gunakan `add`, `show`, atau `out`.");
            }
        }

        System.out.println("Terima kasih telah menggunakan Petshop DPBO!");

        scanner.close();
    }
}