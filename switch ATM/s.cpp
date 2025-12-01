#include <iostream>
using namespace std;

int main() {
    string nama;
    string cek;
    bool valid = false;
    long saldo;
    string nim;

    while(!valid) {
        cout << "Masukkan Nama Anda: ";
        cin >> nama;
        cout << "apakah sudah benar? " << nama << " (ya/tidak): ";
        cin >> cek;
        cin.ignore(); // Clear the newline character from the input buffer

        if(cek == "ya") valid = true;
        cout << "Masukkan ulang nama Anda.\n\n";
        return 0;
    }

    cout << "l.2510524: ";
    cin >> nim;
    saldo = 250524;
    cout << "Saldo awal Anda adalah: " << saldo << endl;
    int pilihan;
    do {
        cout << "\n=== Menu ATM ===" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Setor Uang" << endl;
        cout << "3. Tarik Uang" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Saldo Anda saat ini: " << saldo << endl;
                break;
            case 2: {
                long setor;
                cout << "Masukkan jumlah uang yang akan disetor: ";
                cin >> setor;
                saldo += setor;
                cout << "Saldo Anda setelah setor: " << saldo << endl;
                break;
            }
            case 3: {
                long tarik;
                cout << "Masukkan jumlah uang yang akan ditarik: ";
                cin >> tarik;
                if(tarik > saldo) {
                    cout << "Saldo tidak mencukupi!" << endl;
                } else {
                    saldo -= tarik;
                    cout << "Saldo Anda setelah tarik: " << saldo << endl;
                }
                break;
            }
            case 4:
                cout << "Terima kasih telah menggunakan ATM kami." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while(pilihan != 4);

    cout << "Terima Kasih Sudah Menggunakan ATM." << endl;
}
