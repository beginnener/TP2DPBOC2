import java.util.ArrayList;
import java.util.List; //interface dalam java supaya memudahkan penggunaan list (arraylist, linkedlist, vector)
import java.util.Iterator; //interface dalam java supaya memudahkan penggunaan list (arraylist, linkedlist, vector)

public class Baju extends Aksesoris{
    private String untuk;
    private String size;
    private String merk;

    public Baju(){
        super();        
    }    

    public Baju(String untuk, String size, String merk, String jenis, String bahan, String warna, String nama_produk, int harga, int stok){
        super(jenis, bahan, warna, nama_produk, harga, stok);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

     //getter
    public String get_untuk(){ return this.untuk; }
    public String get_size(){ return this.size; }
    public String get_merk(){ return this.merk; }

    //setter
    public void set_untuk(String untuk){ this.untuk = untuk; }
    public void set_size(String size){ this.size = size; }
    public void set_merk(String merk){ this.merk = merk; }

     public static void Display(List<Baju> Attributes) {
        // Menentukan panjang maksimum untuk setiap kolom
        int maxutk = 7, maxsize = 4, maxjenis = 5, maxmerk = 4, maxbahan = 5, maxwarna = 5, maxid = 3, maxnama = 11, maxharga = 10, maxstok = 4;
        
        for (Baju it : Attributes) {
            maxnama = Math.max(maxnama, it.get_produk().length());
            maxmerk = Math.max(maxmerk, it.get_merk().length());
            maxutk = Math.max(maxutk, it.get_untuk().length());
            maxjenis = Math.max(maxjenis, it.get_jenis().length());
            maxsize = Math.max(maxsize, it.get_size().length());
            maxbahan = Math.max(maxbahan, it.get_bahan().length());
            maxwarna = Math.max(maxwarna, it.get_warna().length());
        }
        
        //header tabel
        printBorder(maxid, maxnama, maxmerk, maxutk, maxjenis, maxsize, maxbahan, maxwarna, maxharga, maxstok);
        System.out.println(formatRow(maxid, maxnama, maxmerk, maxutk, maxjenis, maxsize, maxbahan, maxwarna, maxharga, maxstok,
            "ID", "Nama Produk", "Merk", "Hewan", "Jenis", "Size", "Bahan", "Warna", "Harga", "Stok"));
        printBorder(maxid, maxnama, maxmerk, maxutk, maxjenis, maxsize, maxbahan, maxwarna, maxharga, maxstok);

        //isi tabel
        for (Baju it : Attributes) {
            System.out.println(formatRow(maxid, maxnama, maxmerk, maxutk, maxjenis, maxsize, maxbahan, maxwarna, maxharga, maxstok,
                String.valueOf(it.get_ID()), it.get_produk(), it.get_merk(), it.get_untuk(), it.get_jenis(), it.get_size(), it.get_bahan(), it.get_warna(),
                String.valueOf(it.get_harga()), String.valueOf(it.get_stok())));;
        }
        
        //border penutup
        printBorder(maxid, maxnama, maxmerk, maxutk, maxjenis, maxsize, maxbahan, maxwarna, maxharga, maxstok);
    }
    
    private static void printBorder(int... lengths) {
        StringBuilder border = new StringBuilder("+");
        for (int length : lengths) {
            border.append("-".repeat(length + 2)).append("+");
        }
        System.out.println(border);
    }

    //format baris tabel
    private static String formatRow(int maxid, int maxnama, int maxmerk, int maxutk, int maxjenis, int maxsize, int maxbahan, int maxwarna, int maxharga, int maxstok, 
                                    String id, String nama, String merk, String utk, String jenis, String size, String bahan, String warna, String harga, String stok) {
        return String.format("| %" + maxid + "s | %-" + maxnama + "s | %-" + maxmerk + "s | %-" + maxutk + "s | %-" + maxjenis + "s | %-" + maxsize + "s | %-" + maxbahan + "s | %-" + maxwarna + "s | %" + maxharga + "s | %" + maxstok + "s |",
            id, nama, merk, utk, jenis, size, bahan, warna, harga, stok);
    }
}