#include <iostream>
#include "komikList.hpp"
#include "komikQue.hpp"
#include "komikTree.hpp"

using namespace std;

int main() {
    Komik* head = nullptr;
    KomikQueue antrian;
    antrian.front = nullptr;
    antrian.rear = nullptr;
    KomikTreeNode* root = nullptr;

    int pilihan;
    string judul;
    int volume;

    do {
        cout << "\n=== Menu Manajemen Komik ===\n";
        cout << "1. Tambah Komik \n"; //LL
        cout << "2. Tampilkan Komik \n"; //LL
        cout << "3. Tambah ke Antrian \n"; //Q
        cout << "4. Ambil dari Antrian \n"; //Q
        cout << "5. Bangun Tree Komik dari Linked List\n"; //T
        cout << "6. Tampilkan Komik Tree \n"; //T
        cout << "7. Hapus Komik \n"; //LL
        cout << "8. Hapus Komik dari Antrian\n"; //Q
        cout << "0. Keluar\n"; //ex
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: tambahKomik(head); break;
            case 2: tampilkanKomik(head); break;
            case 3: enqueueKomik(antrian); break;
            case 4: dequeueKomik(antrian); break;
            case 5: bangunTreeKomik(head, root); break;
            case 6: tampilkanTree(root); break;
            case 7:
                cout << "Judul: ";
                getline(cin, judul);
                cout << "Volume: ";
                cin >> volume;
                hapusKomikByJudulDanVolume(head, judul, volume);
                break;
            case 8:
                cout << "Judul: ";
                getline(cin, judul);
                cout << "Volume: ";
                cin >> volume;
                hapusKomikQueue(antrian, judul, volume);
                break;
            case 0: cout << "Keluar...\n"; break;
            default: cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 0);

    return 0;
}
