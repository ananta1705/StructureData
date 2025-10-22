#ifndef SLL_H
#define SLL_H

// Definisi Struktur Node
struct Node {
    int info;
    Node* next;
};

// Definisi Struktur Single Linked List (SLL)
struct SLL {
    Node* head;
};

// --- Fungsi-fungsi Dasar ---
// Membuat list kosong
void Createlist(SLL& L);

// Menampilkan isi list
void ViewList(const SLL& L);

// --- Fungsi-fungsi Penyisipan (Insertion) ---
// Menyisipkan di akhir list
void InsertLast(SLL& L, int data);

// Menyisipkan setelah Node tertentu (pNode adalah Node sebelum tempat penyisipan)
void InsertAfter(Node* pNode, int data);

// --- Fungsi-fungsi Penghapusan (Deletion) ---
// Menghapus elemen pertama
void DeleteFirst(SLL& L);

// Menghapus elemen terakhir
void DeleteLast(SLL& L);

// Menghapus Node setelah Node tertentu (pNode adalah Node sebelum yang akan dihapus)
void DeleteAfter(Node* pNode);

#endif // SLL_H