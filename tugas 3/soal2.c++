#include <iostream>
#include <string>

std::string konversiAngkaKeTeks(int angka) {
    if (angka < 0 || angka > 100) return "Angka di luar batas";
    if (angka == 0) return "Nol";
    if (angka == 100) return "Seratus";

    std::string satuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};
    std::string belasan[] = {"Sepuluh", "Sebelas", "Dua Belas", "Tiga Belas", "Empat Belas", "Lima Belas", "Enam Belas", "Tujuh Belas", "Delapan Belas", "Sembilan Belas"};

    std::string hasil = "";
    int p = angka / 10;
    int s = angka % 10;

    if (p >= 2) {
        hasil += satuan[p] + " Puluh";
        if (s > 0) hasil += " " + satuan[s];
    } else if (p == 1) {
        hasil = belasan[s]; 
    } else { // p == 0 (Angka 1-9)
        hasil = satuan[s];
    }

    return hasil;
}

int main() {
    int n;

    std::cout << "Masukkan bilangan bulat (0 s.d 100): ";
    std::cin >> n;

    std::string hasil_teks = konversiAngkaKeTeks(n);
    
    // Output dalam format yang diminta
    std::cout << "\nOutput:\n";
    std::cout << n << " : " << hasil_teks << std::endl;

    return 0;
}