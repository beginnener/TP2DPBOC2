from Petshop import Petshop

class Aksesoris(Petshop):
    _jenis = ""
    _bahan = ""
    _warna = ""

    #constructor w param
    def __init__(self, jenis, bahan, warna, produk, harga, stok):
        super().__init__(produk, harga, stok)
        self._jenis = jenis
        self._bahan = bahan
        self._warna = warna

    #getter
    def get_jenis(self):
        return self._jenis
    def get_bahan(self):
       return self._bahan
    def get_warna(self):
        return self._warna
    
    #setter
    def set_jenis(self,jenis):
        self._jenis = jenis
    def set_bahan(self,bahan):
        self._bahan = bahan
    def set_warna(self,warna):
        self._warna = warna
    