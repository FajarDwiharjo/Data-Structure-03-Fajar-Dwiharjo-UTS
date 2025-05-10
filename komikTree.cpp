#include "komikTree.hpp"

void insertTree(KomikTreeNode*& root, const string& judul, int volume) {
    if (!root) {
        root = new KomikTreeNode{judul, volume, nullptr, nullptr};
    } else if (volume < root->volume) {
        insertTree(root->left, judul, volume);
    } else {
        insertTree(root->right, judul, volume);
    }
}

void preorder(KomikTreeNode* root) {
    if (root) {
        cout << "Judul: " << root->judul
             << ", Volume: " << root->volume << endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void bangunTreeKomik(Komik* head, KomikTreeNode*& root) {
    Komik* temp = head;
    while (temp) {
        insertTree(root, temp->judul, temp->volume);
        temp = temp->next;
    }
}

void tampilkanTree(KomikTreeNode* root) {
    cout << "=== Preorder Tree ===\n";
    preorder(root);
}
