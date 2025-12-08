#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    vector<int> digits;

    // Pisahkan digit
    for(char c : nim) {
        digits.push_back(c - '0');
    }

    cout << "Array digit: ";
    for(int d : digits) cout << d << " ";
    cout << endl;

    // Hitungan
    int total = 0, maxV = digits[0], minV = digits[0];
    for(int d : digits) {
        total += d;
        if(d > maxV) maxV = d;
        if(d < minV) minV = d;
    }
    double rata = (double) total / digits.size();

    // Reverse
    cout << "Reverse array: ";
    for(int i = digits.size()-1; i >= 0; i--) {
        cout << digits[i] << " ";
    }
    cout << endl;

    cout << "Total digit: " << total << endl;
    cout << "Nilai maksimum: " << maxV << endl;
    cout << "Nilai minimum: " << minV << endl;
    cout << "Rata-rata digit: " << rata << endl;

    return 0;
}