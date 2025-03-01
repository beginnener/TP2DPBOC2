import java.util.List; //interface dalam java supaya memudahkan penggunaan list (arraylist, linkedlist, vector)
import java.util.Iterator; //interface dalam java supaya memudahkan penggunaan list (arraylist, linkedlist, vector)

public class Petshop {
    private static int nextID = 1; //
    private int ID;
    private String produk;
    private String kategori;
    private int harga;

    //konstruktor dengan parameter
    public Petshop(int id, String prod, String cat, int price){
        this.ID = id;
        this.produk = prod;
        this.kategori = cat;
        this.harga = price;
    }

    // getter setter untuk class Petshop
    public int get_ID(){return ID;}
    public void set_ID(int id){ this.ID = id;}
    
    public String get_produk(){return produk;}
    public void set_produk(String prod){ this.produk = prod;}
    
    public String get_kategori(){return kategori;}
    public void set_kategori(String cat){ this.kategori = cat;}
    
    public int get_harga(){return harga;}
    public void set_harga(int price){ this.harga = price;}

}
