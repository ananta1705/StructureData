#include "CLL_2.h"

int main() {
    List Playlist;
    createList(Playlist);

    cout << "--- SOAL 2: CIRCULAR DOUBLE LINKED LIST (CDLL) ---" << endl;

    // b. (iii) add (Insert Last)
    add("Alone", "Marshmello", Playlist);
    add("Pamit", "Tulus", Playlist);
    add("Kali Kedua", "Raisa", Playlist);
    add("Hati-hati di Jalan", "Tulus", Playlist);
    
    cout << "\n1. Current Playlist:" << endl;
    displayList(Playlist);
    
    // c. (iv) moveToEnd
    cout << "\n2. Pindahkan 'Pamit' ke Akhir:" << endl;
    moveToEnd("Pamit", "Tulus", Playlist);
    displayList(Playlist); 
    // Urutan: Alone (F), Kali Kedua, Hati-hati di Jalan, Pamit (L)

    // d. playLaguToLagu
    cout << "\n3. Simulasi Pemutaran: 'Alone' sampai 'Hati-hati di Jalan':" << endl;
    playLaguToLagu("Alone", "Marshmello", "Hati-hati di Jalan", "Tulus", Playlist);
    
    cout << "\n4. Simulasi Pemutaran Siklus: 'Pamit' sampai 'Alone':" << endl;
    playLaguToLagu("Pamit", "Tulus", "Alone", "Marshmello", Playlist); // Pamit, Alone

    return 0;
}