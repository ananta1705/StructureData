#include "Clock.h"
#include <iostream>

// Fungsi yang masih memerlukan implementasi penuh:

std::string Clock::toString() const {
    char buffer[9];
    // Menggunakan fungsi anggota hours(), minutes(), seconds()
    std::snprintf(buffer, sizeof(buffer), "%02d:%02d:%02d", hours(), minutes(), seconds());
    return std::string(buffer);
}

std::ostream& operator<<(std::ostream& os, const Clock& clock) {
    os << clock.toString();
    return os;
}

// Mutator (Setter)

void Clock::setTime(int h, int m, int s) {
    if (isValid(h, m, s)) {
        totalDetik = h * 3600 + m * 60 + s;
    } else {
        std::cerr << "[Peringatan Setter] Nilai waktu tidak valid. Waktu tidak diubah." << std::endl;
    }
}

void Clock::setHour(int h) {
    if (h >= 0 && h <= 23) {
        totalDetik = h * 3600 + minutes() * 60 + seconds();
    } else {
        std::cerr << "[Peringatan Setter] Nilai jam (" << h << ") tidak valid. Waktu tidak diubah." << std::endl;
    }
}

void Clock::setMinute(int m) {
    if (m >= 0 && m <= 59) {
        totalDetik = hours() * 3600 + m * 60 + seconds();
    } else {
        std::cerr << "[Peringatan Setter] Nilai menit (" << m << ") tidak valid. Waktu tidak diubah." << std::endl;
    }
}

void Clock::setSecond(int s) {
    if (s >= 0 && s <= 59) {
        totalDetik = hours() * 3600 + minutes() * 60 + s;
    } else {
        std::cerr << "[Peringatan Setter] Nilai detik (" << s << ") tidak valid. Waktu tidak diubah." << std::endl;
    }
}