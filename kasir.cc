#include <iostream>
#include <string>
using namespace std;

int konversiHarga(string hargaStr) {
    string angka = "";
    for (char c : hargaStr) {
        if (c != '.') {
            angka += c;
        }
    }
    return stoi (angka);
}

int main() {
    int JumlahBarang;
    string nama[20];
    int harga[20];
    int beli[20];

    cout << "Masukan Jumlah Barang: ";
    cin >> JumlahBarang;
    cin.ignore();

    for (int i = 0; i < JumlahBarang; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;

        cout << "Nama Barang : ";
        getline(cin, nama[i]);

        string hargaInput;
        cout << "Harga Barang: ";
        getline(cin, hargaInput);

        harga[i] = konversiHarga(hargaInput);
    }

    int pilihan;
    do {
        cout << "\n=== MENU KASIR MINIMARKET ===\n";
        cout << "1. Tampilkan Daftar Barang\n";
        cout << "2. Transaksi & Cetak Struk\n";
        cout << "3. Keluar\n";
        cout << "Pilih Menu: ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            cout << "\nDaftar Barangn";
            for (int i = 0; i < JumlahBarang; i++) {
                cout << i + 1 << ". " << nama[i]
                     << " - Rp " << harga[i] << endl;
            }
        }
        else if (pilihan == 2) {
            int total = 0;

            cout << "\nMasukan Jumlah Beli:\n";
            for (int i = 0; i < JumlahBarang; i++) {
                cout << nama[i] << ": ";
                cin >> beli[i];
                total += harga[i] * beli[i];
            }

            cout << "\n==========================================================\n";
            cout << "                        STRUK BELANJA\n";
            cout << "\n==========================================================\n";
            cout << "Barang\t\tQty\tHarga\tSubtotal\n";
            
            for (int i = 0; i < JumlahBarang; i++) {
                if (beli[i] > 0) {
                    cout << nama[i] << "\t"
                         << beli[i] << "\t"
                         << harga[i] << "\t"
                         << harga[i] * beli[i] << endl;
                }
            }

            cout << "----------------------------------------------------------\n";
            cout << "TOTAL BAYAR : Rp " << total << endl;
            cout << "==========================================================\n";
        }
    } while (pilihan != 3);

    cout << "program selesai.\n";
    return 0;
}