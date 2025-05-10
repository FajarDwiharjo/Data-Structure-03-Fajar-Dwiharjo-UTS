#ifndef KOMIKQUE_HPP
#define KOMIKQUE_HPP

#include "komikList.hpp"

struct KomikQueue {
    Komik* front;
    Komik* rear;
};

void enqueueKomik(KomikQueue& q);
void dequeueKomik(KomikQueue& q);
void hapusKomikQueue(KomikQueue& q, const string& judul, int volume);

#endif
