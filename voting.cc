#include <iostream>
using namespace std;

int main() {
    int suara[3] = {0, 0, 0};
    int pilihan;

    cout << "=== SISTEM VOTING SEDERHANA ===\n";
    cout << "1. Kandidat A\n";
    cout << "2. Kandidat B\n";
    cout << "3. Kandidat C\n";
    cout << "0. Voting Selesai\n";

    do {
        cout << "Piiilih kandidat (1-3): ";
        cin >> pilihan;

        if (pilihan >=1 && pilihan <=3) {
            suara [pilihan - 1]++;
        }
    } while (pilihan !=0);

    cout << "\nHasil Voting:\n";
    cout << "Kandidat A: " << suara[0] << endl;
    cout << "Kandidat B: " << suara[1] << endl;
    cout << "Kandidat C: " << suara[2] << endl;

    return 0;
    
}