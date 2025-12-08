<?php
echo "masukan nim: ";
$nim = trim(fgets(STDIN));

$digits = [];

for ($i = 0; $i < strlen($nim); $i++) {
    $digits[] = (int)$nim[$i];
}
echo "Array digits: ";
print_r($digits);

$total = array_sum($digits);
$max = max($digits);
$min = min($digits);
$rata = $total / count($digits);
$reversed = array_reverse($digits);

echo "Total: " . $total . "\n";
echo "Max: " . $max . "\n";
echo "Min: " . $min . "\n"; 
echo "Rata-rata: " . $rata . "\n";

echo "Reversed Array: ";
print_r($reversed);