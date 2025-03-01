public class Aksesoris extends Petshop{
    protected String jenis;  
    protected String bahan;  
    protected String warna;  

    //kosntruktor kosong
    public Aksesoris(){ 
        super(); 
    } 

    //konstruktor parameter
    public Aksesoris (String jenis, String bahan, String warna, String nama_produk, int harga, int stok){
        super(nama_produk, harga, stok);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    //getter
    public String get_jenis(){ return this.jenis; }
    public String get_bahan(){ return this.bahan; }
    public String get_warna(){ return this.warna; }

    //setter
    public void set_jenis(String jenis){ this.jenis = jenis; }
    public void set_bahan(String bahan){ this.bahan = bahan; }
    public void set_warna(String warna){ this.warna = bahan; }

}