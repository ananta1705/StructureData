#include <iostream>
#include "stack.h"
#include "stack.cpp" // Digunakan untuk kompilasi sederhana
using namespace std;

int main() {
	Stack s;
	int pilihan, nilai;

	createStack(&s);

	do {
		cout << "\n=== PROGRAM STACK (ADT SEDERHANA) ===\n";
		cout << "1. Push (Tambah Data)\n";
		cout << "2. Pop (Hapus Data Teratas)\n";
		cout << "3. Lihat Data Teratas\n";
		cout << "4. Tampilkan Isi Stack\n";
		cout << "0. Keluar\n";
		cout << "Pilih: ";
		cin >> pilihan;

		switch (pilihan) {
			case 1:
				cout << "Masukkan nilai: ";
				cin >> nilai;
				push(&s, nilai);
				break;
			case 2:
				pop(&s);
				break;
			case 3:
				cout << "Elemen teratas: " << top(s) << endl;
				break;
			case 4:
				display(s);
				break;
			case 0:
				cout << "Keluar dari program...\n";
				break;
			default:
				cout << "Pilihan tidak valid!\n";
				break;
		}
	} while (pilihan != 0);

	return 0;
}