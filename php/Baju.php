<?php
require_once "Aksesoris.php";

class Baju extends Aksesoris{
    protected $untuk;
    protected $size;
    protected $merk;

    public function __construct($untuk, $size, $merk, $jenis, $bahan, $warna, $produk, $harga, $stok, $foto){
        parent::__construct($jenis, $bahan, $warna, $produk, $harga, $stok, $foto);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk= $merk;
    }

    public function getUntuk() {
        return $this->untuk;
    }
    public function getSize() {
        return $this->size;
    }
    public function getMerk() {
        return $this->merk;
    }
    
    public function setUntuk($untuk) {
        $this->untuk = $untuk;
    }
    public function setSize($size) {
        $this->size = $size;
    }
    public function setMerk($merk) {
        $this->merk = $merk;
    }  
}

?>