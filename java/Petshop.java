public class Petshop {
    protected static int nextID = 1;
    protected int ID;
    protected String produk;
    protected int harga;
    protected int stok;

    //konstruktor kosong
    public Petshop(){};

    //konstruktor dengan parameter
    public Petshop(String prod, int harga, int stok){
        this.ID = nextID++; // set id
        this.produk = prod;
        this.harga = harga;
        this.stok = stok;
    }

    // getter setter untuk class Petshop
    public int get_ID(){ return ID; }
    public void set_ID(int id){ this.ID = id;}
    
    public String get_produk(){ return produk; }
    public void set_produk(String prod){ this.produk = prod; }
    
    public int get_harga(){ return harga; }
    public void set_harga(int harga){ this.harga = harga; }
    
    public int get_stok(){ return stok; }
    public void set_stok(int stok){ this.stok = stok; }

}
