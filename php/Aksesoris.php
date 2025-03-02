<?php
require_once "Petshop.php";

class Aksesoris extends Petshop{
    protected $jenis;
    protected $bahan;
    protected $warna;

    public function __construct($jenis, $bahan, $warna, $produk, $harga, $stok, $foto){
        parent::__construct($produk, $harga, $stok, $foto);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }


    public function getJenis() {
        return $this->jenis;
    }
    public function getBahan() {
        return $this->bahan;
    }
    public function getWarna() {
        return $this->warna;
    }
    
    public function setJenis($jenis) {
        $this->jenis = $jenis;
    }
    public function setBahan($bahan) {
        $this->bahan = $bahan;
    }
    public function setWarna($warna) {
        $this->warna = $warna;
    }
}

?>