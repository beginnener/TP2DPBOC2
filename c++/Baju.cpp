#include "Aksesoris.cpp"
#include <iomanip>

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
    
    Baju(string untukHewan, string size, string merk, string jenis, string bahan, string warna, string namaProduk, int hargaProduk, int stokProduk) 
    : Aksesoris(jenis, bahan, warna, namaProduk, hargaProduk, stokProduk){
        this->untuk_hewan = untukHewan;
        this->size = size;
        this->merk = merk;
    }
    
    //getter
    string get_untuk() const { return this->untuk_hewan; }
    string get_size() const { return this->size; }
    string get_merk() const { return this->merk; }

    //setter
    void set_untuk(string untuk) { this->untuk_hewan = untuk; }
    void set_size(string size) { this->size = size; }
    void set_merk(string merk) { this->merk = merk; }

    //utk spasi
    static void Display(const list<Baju> &Attributes){
        // cek panjang maks
        size_t maxutk = 7, maxsize = 4, maxjenis = 5, maxmerk = 4, maxbahan = 5, maxwarna = 5, maxid = 3, maxnama = 11, maxharga = 10, maxstok = 4;
        for (const auto& it : Attributes) {
            maxnama = max(maxnama, it.get_produk().length());
            maxmerk = max(maxmerk, it.get_merk().length());
            maxutk = max(maxutk, it.get_untuk().length());
            maxjenis = max(maxjenis, it.get_jenis().length());
            maxsize = max(maxsize, it.get_size().length());
            maxbahan = max(maxbahan, it.get_bahan().length());
            maxwarna = max(maxwarna, it.get_warna().length());
        }   

        //print header
        //border atas
        cout << '+' << string((maxid + 2), '-') << '+' << string((maxnama + 2), '-') << '+' << string((maxmerk + 2), '-') << '+' << string((maxutk + 2), '-') << '+' << string((maxjenis + 2), '-')
        << '+' << string((maxsize + 2), '-') << '+' << string((maxbahan + 2), '-') << '+' << string((maxwarna + 2), '-') << '+' << string((maxharga + 2), '-') << '+' << string((maxstok + 2), '-') << '+' << endl;
        //isi
        cout << "| "<< setw(maxid) << right  << "ID"
        << " | " << setw(maxnama) << left << "Nama Produk"
        << " | " << setw(maxmerk) << left << "Merk"
        << " | " << setw(maxutk) << left << "Hewan"
        << " | " << setw(maxjenis) << left << "Jenis"
        << " | " << setw(maxsize) << left << "Size"
        << " | " << setw(maxbahan) << left << "Bahan"
        << " | " << setw(maxwarna) << left << "Warna"
        << " | " << setw(maxharga) << left <<"Harga"
        << " | " << setw(maxstok) << left << "Stok"
        << " | " << endl;
        //border bawah
        cout << '+' << string((maxid + 2), '-') << '+' << string((maxnama + 2), '-') << '+' << string((maxmerk + 2), '-') << '+' << string((maxutk + 2), '-') << '+' << string((maxjenis + 2), '-')
        << '+' << string((maxsize + 2), '-') << '+' << string((maxbahan + 2), '-') << '+' << string((maxwarna + 2), '-') << '+' << string((maxharga + 2), '-') << '+' << string((maxstok + 2), '-') << '+' << endl;
        
        //isi tabel
        for(const auto& it:Attributes){
            cout << "| "<< setw(maxid) << right << it.Petshop::get_ID()
            << " | " << setw(maxnama) << left << it.get_produk()
            << " | " << setw(maxmerk) << left << it.get_merk()
            << " | " << setw(maxutk) << left << it.get_untuk()
            << " | " << setw(maxjenis) << left << it.get_jenis()
            << " | " << setw(maxsize) << left << it.get_size()
            << " | " << setw(maxbahan) << left << it.get_bahan()
            << " | " << setw(maxwarna) << left << it.get_warna()
            << " | " << setw(maxharga) << left << it.get_harga()
            << " | " << setw(maxstok) << left << it.get_stok()
            << " | " << endl;
        }
        
        //border tutup
        cout << '+' << string((maxid + 2), '-') << '+' << string((maxnama + 2), '-') << '+' << string((maxmerk + 2), '-') << '+' << string((maxutk + 2), '-') << '+' << string((maxjenis + 2), '-')
        << '+' << string((maxsize + 2), '-') << '+' << string((maxbahan + 2), '-') << '+' << string((maxwarna + 2), '-') << '+' << string((maxharga + 2), '-') << '+' << string((maxstok + 2), '-') << '+' << endl;
    }

    //destructor
    ~Baju(){

    };
};
