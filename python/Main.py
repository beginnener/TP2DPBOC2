from Baju import Baju



def main():
    listbaju = [
        Baju("Kucing", "M", "CatHolic", "Dress", "Linen", "Putih", "baju", 170000, 50),
        Baju("Kucing", "L", "CatHolic", "Dress", "Linen", "Putih", "baju", 180000, 70),
        Baju("Kucing", "S", "CatHolic", "Dress", "Linen", "Putih", "baju", 170000, 50),
        Baju("Anjing", "L", "Dogtober", "Kaos", "Cotton", "Hijau", "t-shirt", 200000, 40),
        Baju("Anjing", "XL", "Dogtober", "Kaos", "Cotton", "Hijau", "t-shirt", 208000, 40),
    ]
    
    print("Selamat Datang di Petshop DPBO!")
    Baju.display(listbaju)
    print("Masukkan input dengan urutan <untuk> <size> <merk> <jenis> <bahan> <warna> \"nama produk\" <harga> <stok>")
    print("Ketik 'out' untuk keluar dari program")
    
    while True:
        input_data = input("Add to Petshop> ")
        # jika input "out"
        if input_data.lower() == "out":
            break
        # jika input "show"
        elif input_data.lower() == "show":
            Baju.display(listbaju)
            continue
        # jika input add
        elif input_data.lower().startswith("add "):  
            parts = input_data.split(' ')[1:]  # Ambil bagian setelah "add"
            if len(parts) < 8:
                print("Input tidak valid! Pastikan format sesuai.")
                continue
            
            untuk, size, merk, jenis, bahan, warna = parts[:6]
            
            # gabungkan nama produk yang mungkin memiliki spasi
            nama_index_start = input_data.index('"') + 1
            nama_index_end = input_data.rindex('"')
            nama = input_data[nama_index_start:nama_index_end]
            
            try:
                harga, stok = map(int, parts[-2:])
                listbaju.append(Baju(untuk, size, merk, jenis, bahan, warna, nama, harga, stok))
                print("Baju berhasil ditambahkan!")
                Baju.display(listbaju)
            except ValueError:
                print("Input tidak valid! Pastikan format angka benar.")
        
    print("Terima kasih telah menggunakan Petshop DPBO!")

if __name__ == "__main__":
    main()