#include "Petshop.cpp"

class Aksesoris : public Petshop{
    protected:
    string jenis;
    string bahan;
    string warna;

    public:
    //getter
    string get_jenis(){ return this->jenis; }
    string get_bahan(){ return this->bahan; }
    string get_warna(){ return this->warna; }

    //setter
    void set_jenis(string jenis) { this->jenis = jenis; }
    void set_bahan(string bahan) { this->bahan = bahan; }
    void set_warna(string warna) { this->warna = warna; }

    //constructor
    Aksesoris(){
        this->jenis = "";
        this->bahan = "";
        this->warna = "";
    }
 
    Aksesoris(string jenis, string bahan, string warna, int id, string namaProduk, int hargaProduk, int stokProduk) : Petshop(id, namaProduk, hargaProduk, stokProduk){
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }

    //destructor
    ~Aksesoris();
};