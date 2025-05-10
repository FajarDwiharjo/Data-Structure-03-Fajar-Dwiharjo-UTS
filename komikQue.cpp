#include "komikQue.hpp"

void enqueueKomik(KomikQueue& q) {
    Komik* baru = new Komik;
    cout << "Judul: ";
    getline(cin, baru->judul);
    cout << "Volume: ";
    cin >> baru->volume;
    cin.ignore();
    cout << "Tanggal Rilis: ";
    getline(cin, baru->tanggalRilis);
    baru->next = nullptr;

    if (!q.front) q.front = q.rear = baru;
    else {
        q.rear->next = baru;
        q.rear = baru;
    }
}

void dequeueKomik(KomikQueue& q) {
    if (!q.front) {
        cout << "Antrian kosong.\n";
        return;
    }

    Komik* temp = q.front;
    q.front = q.front->next;
    delete temp;
    if (!q.front) q.rear = nullptr;
    cout << "Komik diambil dari antrian.\n";
}

void hapusKomikQueue(KomikQueue& q, const string& judul, int volume) {
    Komik* curr = q.front;
    Komik* prev = nullptr;

    while (curr) {
        if (curr->judul == judul && curr->volume == volume) {
            if (!prev) q.front = curr->next;
            else prev->next = curr->next;
            if (curr == q.rear) q.rear = prev;
            delete curr;
            cout << "Komik dalam antrian dihapus.\n";
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    cout << "Komik tidak ditemukan dalam antrian.\n";
}
