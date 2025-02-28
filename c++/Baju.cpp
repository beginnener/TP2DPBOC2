#include "Aksesoris.cpp"

class Baju : public Aksesoris{
    private:
    string untuk_hewan;
    string size;
    string merk;

    public:
    
    Baju(){
        this->untuk_hewan = "";
        this->size = "";
        this->merk = "";
    };

    Baju(string untukHewan, string size, string merk, string jenis, string bahan, string warna, int id, string namaProduk, int hargaProduk, int stokProduk) 
    : Aksesoris(jenis, bahan, warna, id, namaProduk, hargaProduk, stokProduk){
        this->untuk_hewan = untukHewan;
        this->size = size;
        this->merk = merk;
    }

    ~Baju();
};
