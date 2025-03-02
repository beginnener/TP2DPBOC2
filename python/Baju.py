from Aksesoris import Aksesoris

class Baju(Aksesoris):
    __untuk = ""
    __size = ""
    __merk = ""

    #constructor
    def __init__(self, untuk, size, merk, jenis, bahan, warna, produk, harga, stok):
        super().__init__(jenis, bahan, warna, produk, harga, stok)
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk

    # getter
    def set_untuk(self,untuk) :
        self.__untuk = untuk
    def set_size(self,size) :
        self.__size = size
    def set_merk(self,merk) :
        self.__merk = merk
    
    # setter
    def get_untuk(self) :
        return self.__untuk
    def get_size(self) :
        return self.__size
    def get_merk(self) :
        return self.__merk
        
    @staticmethod
    def display(attributes):
        # Ambil panjang maksimum setiap kolom berdasarkan isi tabel
        max_lengths = {
            "ID": 3, "Nama Produk": 11, "Merk": 4, "Hewan": 7, "Jenis": 5,
            "Size": 4, "Bahan": 5, "Warna": 5, "Harga": 10, "Stok": 4
        }
        
        for item in attributes:
            max_lengths["Nama Produk"] = max(max_lengths["Nama Produk"], len(item.get_produk()))
            max_lengths["Merk"] = max(max_lengths["Merk"], len(item.get_merk()))
            max_lengths["Hewan"] = max(max_lengths["Hewan"], len(item.get_untuk()))
            max_lengths["Jenis"] = max(max_lengths["Jenis"], len(item.get_jenis()))
            max_lengths["Size"] = max(max_lengths["Size"], len(item.get_size()))
            max_lengths["Bahan"] = max(max_lengths["Bahan"], len(item.get_bahan()))
            max_lengths["Warna"] = max(max_lengths["Warna"], len(item.get_warna()))
            max_lengths["Harga"] = max(max_lengths["Harga"], len(str(item.get_harga())))
            max_lengths["Stok"] = max(max_lengths["Stok"], len(str(item.get_stok())))
        
        # Membuat format string untuk header dan baris tabel secara dinamis
        headers = list(max_lengths.keys())
        col_widths = list(max_lengths.values())
        
        header_format = "| " + " | ".join(f"{{:<{w}}}" for w in col_widths) + " |"
        row_format = "| " + " | ".join(f"{{:<{w}}}" for w in col_widths) + " |"
        
        # Cetak border atas
        print("+" + "+".join("-" * (w + 2) for w in col_widths) + "+")
        
        # Cetak header
        print(header_format.format(*headers))
        
        # Cetak border bawah header
        print("+" + "+".join("-" * (w + 2) for w in col_widths) + "+")
        
        # Cetak isi tabel
        for item in attributes:
            print(row_format.format(
                item.get_ID(), item.get_produk(), item.get_merk(),
                item.get_untuk(), item.get_jenis(), item.get_size(),
                item.get_bahan(), item.get_warna(), item.get_harga(),
                item.get_stok(),
                *[w for w in col_widths]
            ))
        
        # Cetak border bawah tabel
        print("+" + "+".join("-" * (w + 2) for w in col_widths) + "+")

