#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>
#include <string>
#include <cstdio>

class Clock {
private:
    int totalDetik; 
    static const int DETIK_PER_HARI = 86400;
    
    // Fungsi bantuan inline (didefinisikan di dalam kelas)
    bool isValid(int h, int m, int s) const {
        return (h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59);
    }
    
    void normalize() {
        totalDetik = (totalDetik % DETIK_PER_HARI + DETIK_PER_HARI) % DETIK_PER_HARI;
    }

public:
    // Constructor
    Clock(int jam = 0, int menit = 0, int detik = 0) {
        if (isValid(jam, menit, detik)) {
            totalDetik = jam * 3600 + menit * 60 + detik;
        } else {
            std::cerr << "[Peringatan] Input tidak valid. Default ke 00:00:00." << std::endl;
            totalDetik = 0;
        }
    }

    // Accessor (Getter) - Implementasi Inline
    int hours() const { return totalDetik / 3600; }
    int minutes() const { return (totalDetik % 3600) / 60; }
    int seconds() const { return totalDetik % 60; }

    // Mutator (Setter) - Hanya dideklarasikan (untuk menjaga keringkasan header)
    void setTime(int h, int m, int s);
    void setHour(int h); 
    void setMinute(int m); 
    void setSecond(int s);

    // Operasi Aritmatika (Overloading) - Implementasi Inline
    Clock operator+(const Clock& other) const {
        return Clock(0, 0, totalDetik + other.totalDetik); 
    }
    Clock operator+(int seconds_to_add) const {
        return Clock(0, 0, totalDetik + seconds_to_add);
    }

    // Operasi Perbandingan (Overloading) - Implementasi Inline
    bool operator==(const Clock& other) const { return totalDetik == other.totalDetik; }
    bool operator!=(const Clock& other) const { return totalDetik != other.totalDetik; }
    bool operator<(const Clock& other) const { return totalDetik < other.totalDetik; }
    bool operator<=(const Clock& other) const { return totalDetik <= other.totalDetik; }
    bool operator>(const Clock& other) const { return totalDetik > other.totalDetik; }
    bool operator>=(const Clock& other) const { return totalDetik >= other.totalDetik; }

    // Operasi Output
    std::string toString() const;
    friend std::ostream& operator<<(std::ostream& os, const Clock& clock);
};

#endif // CLOCK_H