<?php

class Petshop {
    private static $NextID = 1; // Variabel statis untuk autoincrement id
    private $ID;
    protected $produk;
    protected $harga;
    protected $stok;
    protected $foto;

    // construct dengan parameter
    public function __construct($produk, $harga, $stok, $foto) {
        self::$NextID++; // self fungsinya supaya ketika instansiasi objek tidak mengenali variabel ini sebegai variabel yang sama dengan objek yang diinstansiasi sebelumnya (jadi kayak global var gitu) 
        $this->ID = self::$NextID; // self:: (variabel statis, sama seperti static di c++ dan java)
        $this->produk = $produk;
        $this->harga = $harga;
        $this->stok = $stok;
        $this->foto = $foto;
    }

    public function getID() {
        return $this->ID;
    }
    public function getProduk() {
        return $this->produk;
    }
    public function getHarga() {
        return $this->harga;
    }
    public function getStok() {
        return $this->stok;
    }
    public function getFoto() {
        return $this->foto;
    }


    public function setID($id) {
        $this->ID = $id;
    }
    public function setProduk($produk) {
        $this->produk = $produk;
    }
    public function setHarga($harga) {
        $this->harga = $harga;
    }
    public function setStok($stok) {
        $this->stok = $stok;
    }
    public function setFoto($foto) {
        $this->foto = $foto;
    }
}