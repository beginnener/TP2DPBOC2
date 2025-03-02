<?php
require_once "Baju.php";

function displayTable($attributes) {
    ?>
    <table border="1" cellpadding="5" cellspacing="0">
        <thead>
            <tr>
                <th>ID</th>
                <th>Nama Produk</th>
                <th>Merk</th>
                <th>Hewan</th>
                <th>Jenis</th>
                <th>Size</th>
                <th>Bahan</th>
                <th>Warna</th>
                <th>Harga</th>
                <th>Stok</th>
            </tr>
        </thead>
        <tbody>
            <?php foreach ($attributes as $item) { ?>
                <tr>
                    <td><?php echo htmlspecialchars($item['id']); ?></td>
                    <td><?php echo htmlspecialchars($item['nama_produk']); ?></td>
                    <td><?php echo htmlspecialchars($item['merk']); ?></td>
                    <td><?php echo htmlspecialchars($item['untuk']); ?></td>
                    <td><?php echo htmlspecialchars($item['jenis']); ?></td>
                    <td><?php echo htmlspecialchars($item['size']); ?></td>
                    <td><?php echo htmlspecialchars($item['bahan']); ?></td>
                    <td><?php echo htmlspecialchars($item['warna']); ?></td>
                    <td><?php echo htmlspecialchars($item['harga']); ?></td>
                    <td><?php echo htmlspecialchars($item['stok']); ?></td>
                </tr>
            <?php } ?>
        </tbody>
    </table>
    <?php
}

$attributes = [
    ['id' => 1, 'untuk' => 'Kucing', 'size' => 'M', 'merk' => 'CatHolic', 'jenis' => 'Dress', 'bahan' => 'Linen', 'warna' => 'Putih', 'nama_produk' => 'baju', 'harga' => 170000, 'stok' => 50],
    ['id' => 2, 'untuk' => 'Kucing', 'size' => 'L', 'merk' => 'CatHolic', 'jenis' => 'Dress', 'bahan' => 'Linen', 'warna' => 'Putih', 'nama_produk' => 'baju', 'harga' => 180000, 'stok' => 70],
    ['id' => 3, 'untuk' => 'Kucing', 'size' => 'S', 'merk' => 'CatHolic', 'jenis' => 'Dress', 'bahan' => 'Linen', 'warna' => 'Putih', 'nama_produk' => 'baju', 'harga' => 170000, 'stok' => 50],
    ['id' => 4, 'untuk' => 'Anjing', 'size' => 'L', 'merk' => 'Dogtober', 'jenis' => 'Kaos', 'bahan' => 'Cotton', 'warna' => 'Hijau', 'nama_produk' => 't-shirt', 'harga' => 200000, 'stok' => 40],
    ['id' => 5, 'untuk' => 'Anjing', 'size' => 'XL', 'merk' => 'Dogtober', 'jenis' => 'Kaos', 'bahan' => 'Cotton', 'warna' => 'Hijau', 'nama_produk' => 't-shirt', 'harga' => 208000, 'stok' => 40],
    ['id' => 6, 'untuk' => 'Kucing', 'size' => 'M', 'merk' => 'MeowWear', 'jenis' => 'Sweater', 'bahan' => 'Wool', 'warna' => 'Abu-abu', 'nama_produk' => 'sweater', 'harga' => 190000, 'stok' => 60],
    ['id' => 7, 'untuk' => 'Kucing', 'size' => 'S', 'merk' => 'MeowWear', 'jenis' => 'Sweater', 'bahan' => 'Wool', 'warna' => 'Hitam', 'nama_produk' => 'sweater', 'harga' => 185000, 'stok' => 50],
    ['id' => 8, 'untuk' => 'Anjing', 'size' => 'M', 'merk' => 'Pawfect', 'jenis' => 'Jaket', 'bahan' => 'Denim', 'warna' => 'Biru', 'nama_produk' => 'jaket', 'harga' => 220000, 'stok' => 30],
    ['id' => 9, 'untuk' => 'Anjing', 'size' => 'L', 'merk' => 'Pawfect', 'jenis' => 'Jaket', 'bahan' => 'Denim', 'warna' => 'Hitam', 'nama_produk' => 'jaket', 'harga' => 230000, 'stok' => 25],
    ['id' => 10, 'untuk' => 'Kucing', 'size' => 'XL', 'merk' => 'MeowStyle', 'jenis' => 'Hoodie', 'bahan' => 'Fleece', 'warna' => 'Merah', 'nama_produk' => 'hoodie', 'harga' => 210000, 'stok' => 45]
];

displayTable($attributes);
?>