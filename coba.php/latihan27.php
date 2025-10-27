<?php
$tugas = readline("Masukan nilai tugas: ");
$uts = readline("Masukan nilai uts: ");
$uas = readline("Masukan nilai uas: ");

$nilai_akhir = ($tugas * 0.3) + ($uts * 0.3) + ($uas * 0.4);

echo "Nilai Akhir: " . $nilai_akhir . "\n";
if ($nilaiAkhir>=60) {
    echo "Selamat, Anda Lulus!\n";
} else {
    echo "Maaf, Anda Tidak Lulus.\n";
}