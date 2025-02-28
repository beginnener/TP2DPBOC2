#include <iostream>
#include <string>
#include <list>

using namespace std; // supaya tidak harus tulis std:: pada fungsi seperti cout, cin, string

class Petshop{
    protected :
    int ID;
    string nama_produk;
    int harga_produk;
    int stok_produk;

    public:
    Petshop(){
        this->nama_produk = ""; // set kosong constructor produk
        this->harga_produk = 0; // set kosong constructor kategori
        this->stok_produk = 0; // set 0 konstruktor harga
    }

    Petshop(int id, string produk, int harga, int stok) : ID(id), nama_produk(produk), harga_produk(harga), stok_produk(stok) {} // constructor dengan parameter

    // getter setter
    int get_ID()const { return this->ID; } // const disini berguna supaya nilai dari variabel dipastikan tidak dapat diubah secara sengaja ataupun tidak sengaja, karena fungsi get hanya read-only
    void set_ID(int ID) { this->ID = ID; }
    
    string get_produk() const{ return this->nama_produk; }
    void set_produk(string produk){ this->nama_produk = produk; }
    
    int get_harga() const { return this->harga_produk; }
    void set_harga(int harga){ this->harga_produk = harga; }
    
    int get_stok() const { return this->stok_produk; }
    void set_stok(int stok){ this->stok_produk = stok; }

    //destructor
    ~Petshop();
};
