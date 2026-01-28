<?php
// membuat fungsi 
function perkenalan($nama, $salam = "Assalamualaikum")
{
    echo $salam . ", ";
    echo "Perkenalkan, nama saya " . $nama . "<br/>";
    echo "Senang berkenalan dengan anda<br/>";
}
// memanggil fungsi yang sudah dibuat 
perkenalan("Muhammad mazon", "Hi");
perkenalan("Muhammad ikhsan", "Hi");
echo "<hr>";
$saya = "Muhammad mazon";
$saya = "Muhammad ikhsan";
$ucapanSalam = "Selamat pagi";
// memanggilnya lagi tanpa mengisi parameter salam 
