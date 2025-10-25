#include "CLL_2.h"

void createList(List& L) {
    L.first = nullptr;
}

// b. (i) function createNewElm
address createNewElm(string judul, string penyanyi) {
    address p = new ElmtLagu;
    if (p != nullptr) {
        p->judul = judul;
        p->penyanyi = penyanyi;
        p->prev = nullptr;
        p->next = nullptr;
    }
    return p;
}

// b. (ii) procedure insertLast
void insertLast(address p, List& L) {
    if (p == nullptr) return;

    if (L.first == nullptr) { 
        L.first = p;
        p->next = p;
        p->prev = p;
    } else { 
        address lastElm = L.first->prev;
        
        p->prev = lastElm;
        p->next = L.first;
        
        lastElm->next = p;
        L.first->prev = p;
    }
}

// b. (iii) procedure add
void add(string judul, string penyanyi, List& L) {
    address p = createNewElm(judul, penyanyi);
    if (p != nullptr) {
        insertLast(p, L);
    }
}

// c. (i) procedure deleteFirst
void deleteFirst(List& L, address& p) {
    p = nullptr;
    if (L.first == nullptr) return;

    p = L.first;
    if (p->next == p) { // Hanya 1 elemen
        L.first = nullptr;
    } else { // Lebih dari 1 elemen
        address lastElm = p->prev;
        
        L.first = p->next;      
        
        lastElm->next = L.first;
        L.first->prev = lastElm;

        p->next = nullptr; 
        p->prev = nullptr;
    }
}

// c. (ii) procedure deleteAfter
void deleteAfter(address q, address& p, List& L) {
    p = nullptr;
    if (L.first == nullptr || q == nullptr) return;

    p = q->next;

    // Jika p adalah first (kasus q=Last, p=First), kita panggil deleteFirst
    if (p == L.first) {
        deleteFirst(L, p);
        return;
    }
    
    // Kasus p di tengah
    address r = p->next;
    
    q->next = r;     
    r->prev = q;     
    
    p->next = nullptr; 
    p->prev = nullptr;
}


// c. (iii) function searchLagu
address searchLagu(string judul, string penyanyi, List L) {
    if (L.first == nullptr) return nullptr;

    address P = L.first;
    do {
        if (P->judul == judul && P->penyanyi == penyanyi) {
            return P;
        }
        P = P->next;
    } while (P != L.first);

    return nullptr;
}

// c. (iv) procedure moveToEnd
void moveToEnd(string judul, string penyanyi, List& L) {
    if (L.first == nullptr) return;

    address P = searchLagu(judul, penyanyi, L);
    
    if (P != nullptr) {
        if (P == L.first->prev) return; // Sudah di akhir
        
        address temp = P; // Simpan node P yang akan diputus

        // 1. Putus P dari list
        if (P == L.first) { 
            deleteFirst(L, P); 
        } else { 
            address Q = P->prev;
            deleteAfter(Q, P, L);
        }
        
        // 2. Tambahkan temp (node yang sama) ke akhir list
        insertLast(temp, L);
    }
}

// d. procedure playLagu ToLagu
void playLaguToLagu(string judul1, string penyanyi1, string judul2, string penyanyi2, List L) {
    address StartNode = searchLagu(judul1, penyanyi1, L);
    address EndNode = searchLagu(judul2, penyanyi2, L);
    
    if (StartNode == nullptr || EndNode == nullptr) {
        cout << "Lagu tidak ditemukan." << endl;
        return;
    }
    
    address P = StartNode;
    cout << "--- Memutar Lagu ---" << endl;
    do {
        cout << "Memutar: " << P->judul << " - " << P->penyanyi << endl;

        if (P == EndNode) break; 
        
        P = P->next;
    } while (P != StartNode);
    cout << "--- Pemutaran Selesai ---" << endl;
}

void displayList(List L) {
    if (L.first == nullptr) {
        cout << "Playlist kosong." << endl;
        return;
    }
    address P = L.first;
    cout << "Playlist:" << endl;
    do {
        cout << "  " << P->judul << " - " << P->penyanyi;
        if (P == L.first) cout << " [First]";
        if (P->next == L.first) cout << " [Last]";
        cout << endl;
        P = P->next;
    } while (P != L.first);
}