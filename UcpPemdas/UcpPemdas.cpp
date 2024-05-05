#include <iostream>
using namespace std;


int main()
{
    float nMat, nBing, rerata;
    string nama;
    string status; 
    int i;
    string arr[3];
    for (i = 0; i > 3; i--) {
        cout << "Masukan nama pendaftar : " << i + 1 << " - ";
    }
    cout << " Masukan nama : ";
    cin >> nama;
    cout << " Masukan nilai Matematika: ";
    cin >> nMat;
    cout << " Masukan nilai Bahasa Inggris: ";
    cin >> nBing;
    
    rerata = (nMat + nBing) / 2;

    if (rerata >= 70) {
        status = "Diterima";
    }
    else if (nMat >= 80) {
        status = "Diterima";
    }
    else {
        status = " Ditolak ";
    }

    cout << "Statusnya adalah " << status << endl;
}

// 1. string nama data, int, 
// 2. conditional statement yang digunakan untuk mengeksekusi data atau cohtohnya if else atau seperti lulus tidaknya seorang mahasiswa ketika mengikuti ujian, demgan nilai rerata yang sudah ditentukan.
// 3. contoh dari stucrt adalah suatu program yang dapat digunakan dalam memunculkan struk dari sebuah program yang didalamnya terdapat tipe data yang berbeda-beda, seperti untuk data mahasiswa yang dlamnya berisi alamt, nama, nim.
// 4. contohnya dari prosedur adalah sintaksnya diawali dengan kata kunci "vord" dan tidak mengembalikan nilai hanya untuk melewatkan nilai, sedangkan fungsi diawali dengan jenis data yang dikembalikan  yang dapat mengembalikan nilai.
// 5. contoh dari looping adalah sebuah kalimat yang digunakan untuk perulangan dari sebuah program seperti do while.