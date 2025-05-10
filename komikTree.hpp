#ifndef KOMIKTREE_HPP
#define KOMIKTREE_HPP

#include "komikList.hpp"

struct KomikTreeNode {
    string judul;
    int volume;
    KomikTreeNode* left;
    KomikTreeNode* right;
};

void insertTree(KomikTreeNode*& root, const string& judul, int volume);
void preorder(KomikTreeNode* root);
void bangunTreeKomik(Komik* head, KomikTreeNode*& root);
void tampilkanTree(KomikTreeNode* root);

#endif
