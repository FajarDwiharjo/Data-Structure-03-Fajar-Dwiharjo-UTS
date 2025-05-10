#include "komikList.hpp"

void tambahKomik(Komik*& head) {
    Komik* baru = new Komik;
    cout << "Judul: ";
    getline(cin, baru->judul);
    cout << "Volume: ";
    cin >> baru->volume;
    cin.ignore();
    cout << "Tanggal Rilis (YYYY-MM-DD): ";
    getline(cin, baru->tanggalRilis);
    baru->next = nullptr;

    if (!head) head = baru;
    else {
        Komik* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = baru;
    }
}

void tampilkanKomik(Komik* head) {
    Komik* temp = head;
    while (temp) {
        cout << "Judul: " << temp->judul
             << ", Volume: " << temp->volume
             << ", Rilis: " << temp->tanggalRilis << endl;
        temp = temp->next;
    }
}

void hapusKomikByJudulDanVolume(Komik*& head, const string& judul, int volume) {
    Komik* curr = head;
    Komik* prev = nullptr;

    while (curr) {
        if (curr->judul == judul && curr->volume == volume) {
            if (!prev) head = curr->next;
            else prev->next = curr->next;
            delete curr;
            cout << "Komik dihapus.\n";
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    cout << "Komik tidak ditemukan.\n";
}
