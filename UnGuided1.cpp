#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int jumlahSimpul;

    cout << "Silakan masukan jumlah simpul: ";
    cin >> jumlahSimpul;
    cin.ignore();

    vector<string> namaSimpul(jumlahSimpul);

    cout << "Silakan masukan nama simpul" << endl;
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Simpul " << i + 1 << " : ";
        getline(cin, namaSimpul[i]);
    }

    vector<vector<int>> bobot(jumlahSimpul, vector<int>(jumlahSimpul, 0));

    cout << "Silakan masukan bobot antar simpul" << endl;
    for (int i = 0; i < jumlahSimpul; ++i) {
        for (int j = 0; j < jumlahSimpul; ++j) {
            if (i != j) {
                cout << namaSimpul[i] << "--->" << namaSimpul[j] << " = ";
                cin >> bobot[i][j];
            }
        }
    }

    cout << setw(15) << "";
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << setw(15) << namaSimpul[i];
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << setw(15) << namaSimpul[i];
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << setw(15) << bobot[i][j];
        }
        cout << endl;
    }

    return 0;
}
