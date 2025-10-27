#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Masukkan Angka Pertama: ";
    cin >> a;
    cout << "Masukkan Angka Kedua: ";
    cin >> b;

    if(a>b)
        cout << "lebih dari besar" << endl;
     else if(a<b)
        cout << "lebih dari kecil" << endl;
     else 
        cout << "Kedua Angka Sama Besar" << endl;

    cout<<"apakah kedua nya sama?"<< (a==b);
}