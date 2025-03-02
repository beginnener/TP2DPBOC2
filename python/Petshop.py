class Petshop:
    NextID = 1  # variabel statis untuk autoincrement id
    _ID = NextID
    _produk = ""
    _harga = 0
    _stok = 0

    #constructor
    def __init__(self, produk, harga, stok):
        self._ID = Petshop.NextID
        Petshop.NextID += 1
        self._produk = produk
        self._harga = harga
        self._stok = stok

    #getter
    def get_ID(self):
        return self._ID
    def get_produk(self):
        return self._produk
    def get_harga(self):
        return self._harga
    def get_stok(self):
        return self._stok
    
    #setter
    def set_produk(self, produk):
        self._produk = produk
    def set_harga(self, harga):
        self._harga = harga
    def set_stok(self, stok):
        self._stok = stok