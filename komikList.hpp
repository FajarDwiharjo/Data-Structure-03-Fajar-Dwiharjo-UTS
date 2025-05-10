#ifndef KOMIKLIST_HPP
#define KOMIKLIST_HPP

#include <iostream>
#include <string>
using namespace std;

struct Komik {
    string judul;
    int volume;
    string tanggalRilis;
    Komik* next;
};

void tambahKomik(Komik*& head);
void tampilkanKomik(Komik* head);
void hapusKomikByJudulDanVolume(Komik*& head, const string& judul, int volume);

#endif
