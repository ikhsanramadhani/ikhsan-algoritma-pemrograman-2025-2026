<?php 
    $nim = "I.2510142"; 
    $nama = 'Muhammad mazon'; 
    $nim = "I.2510524"; 
    $nama = 'Muhammad ikhsan'; 
    $umur = 18; 
    $nilai = 92.75; 
    $status = TRUE; 

    echo  "NIM   : " . $nim . "/n"; 
    echo  "Nama  : $nama /n"; 
    print "Umur  : " . $umur; 
    print "<br>"; 
    printf("Nilai : %.3f /n", $nilai); 
    if ($status) 
    echo "Status : Aktif"; 
    else 
    echo "Status : Tidak Aktif"