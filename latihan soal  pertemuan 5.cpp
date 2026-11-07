#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaSiswa;
    float nilai1, nilai2, nilai3, rataRata;
    string hadiah;

    // --- LAYAR MASUKKAN ---
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa             : ";
    getline(cin, namaSiswa);
    cout << "Nilai Pertandingan I   : "; cin >> nilai1;
    cout << "Nilai Pertandingan II  : "; cin >> nilai2;
    cout << "Nilai Pertandingan III : "; cin >> nilai3;
    cout << endl;

    // --- PROSES HITUNG & PERCABANGAN ---
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    if (rataRata >= 85) {
        hadiah = "Seperangkat Komputer P4";
    } else if (rataRata >= 70) {
        hadiah = "Uang sebesar Rp. 500.000";
    } else {
        hadiah = "Hadiah Hiburan";
    }

    // --- LAYAR KELUARAN ---
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil perlombaan yang diikutinya." << endl;
    cout << "Hadiah yang didapat adalah " << hadiah << endl;

    return 0;
}
