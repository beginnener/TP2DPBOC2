#include <iomanip>
#include "Baju.cpp"

int Petshop::counter = 1;

int main() {
    
    //membuat objek baju
    list<Baju> listbaju = {
        Baju("Kucing","M", "CatHolic" ,"Dress", "Linen", "Putih", "baju", 170000, 50),
        Baju("Kucing","L", "CatHolic" ,"Dress", "Linen", "Putih", "baju", 180000, 70),
        Baju("Kucing","S", "CatHolic" ,"Dress", "Linen", "Putih", "baju", 170000, 50),
        Baju("Anjing","L", "Dogtober" ,"Kaos", "Cotton", "Hijau", "t-shirt", 200000, 40),
        Baju("Anjing","XL", "Dogtober" ,"Kaos", "Cotton", "Hijau", "t-shirt", 208000, 40),
    };

    cout << "Selamat Datang di Petshop DPBO!" << endl;
    Baju::Display(listbaju);
    cout << "Masukan input dengan urutan <untuk> <size> <merk> <jenis> <bahan> <warna> <nama produk, gunakan tanda kutip dua jika nama memiliki spasi> <harga> <stok>" << endl;
    cout << "Ketik out untuk keluar dari program" << endl;
    
    string input; 
    string untuk, size, jenis, merk, bahan, warna, nama;
    int harga, stok; 
    
    while(input != "out"){
        cout << "Add to Petshop> ";
        getline(cin, input); // Baca seluruh baris input

        // Gunakan stringstream untuk memisahkan perintah
        istringstream ss(input);
        string command;
        ss >> command; // Ambil kata pertama (perintah)

        if (command == "out") break;
        else if (command == "add") {
            if (ss >> untuk >> size >> merk >> jenis >> bahan >> warna) {
                getline(ss >> ws, nama, '"'); // Ambil teks dalam kutipan (opsional)
                getline(ss, nama, '"');       // Pastikan nama produk bisa memiliki spasi
                if (ss >> harga >> stok) {
                    listbaju.push_back(Baju(untuk, size, merk, jenis, bahan, warna, nama, harga, stok));
                    cout << "Baju berhasil ditambahkan!" << endl;
                    Baju::Display(listbaju);
                } else {
                    cout << "Input tidak valid! Pastikan format angka benar." << endl;
                }
            } else {
                cout << "Input tidak valid! Pastikan format sesuai." << endl;
            }
        } 
        else if (command == "show") Baju::Display(listbaju);
        else cout << "Perintah tidak dikenali! Gunakan `add`, `show`, atau `out`." << endl;
    }

    cout << "Terima kasih telah menggunakan Petshop DPBO!" << endl;
    return 0;
}
