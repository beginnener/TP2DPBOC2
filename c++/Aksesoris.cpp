#include "Petshop.cpp"

class Aksesoris : public Petshop{
    protected:
    string jenis;
    string bahan;
    string warna;

    
    //constructor
    Aksesoris(){
        this->jenis = "";
        this->bahan = "";
        this->warna = "";
    }
 
    Aksesoris(string jenis, string bahan, string warna, string namaProduk, int hargaProduk, int stokProduk) : Petshop(namaProduk, hargaProduk, stokProduk){
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }
    
    public:
    //getter
    string get_jenis() const { return this->jenis; }
    string get_bahan() const { return this->bahan; }
    string get_warna() const { return this->warna; }

    //setter
    void set_jenis(string jenis) { this->jenis = jenis; }
    void set_bahan(string bahan) { this->bahan = bahan; }
    void set_warna(string warna) { this->warna = warna; }

    //destructor
    ~Aksesoris(){
        
    };
};