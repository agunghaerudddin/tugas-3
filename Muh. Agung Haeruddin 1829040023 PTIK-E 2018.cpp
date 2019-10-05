#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int belanja, diskon, bayar, total, jumlah, tambahan;
    string status, anak, anggota, alamat, asal;
    
    cout << "masukkan harga belanjaan anda:";
    cin >> belanja;
    cout << "sudah menikah?";
    cin >> status;
    cout << "punya anak?";
    cin >> anak;
    cout << "punya kartu anggota?";
    cin >> anggota;
    cout << "masukkan kota asal anda:";
    cin >> asal;
    if (belanja > 1102019) {
        if (status == "sudah") {
            if (anak == "punya") {
                if (anggota == "tidak") {
                    cout << "anda mendapatkan diskon 75%" << endl;
                    cout << "harga yang akan anda bayar : " << endl;
                } else {
                    cout << "harga yang akan anda bayar : " << endl;
                }
                diskon = belanja * 0.85;
                jumlah = belanja - diskon;
            } else {
                diskon = belanja * 0.75;
                cout << "anda mendapatkan diskon 50%" << endl;
                cout << "harga yang akan anda bayar : " << endl;
                jumlah = belanja - diskon;
            }
            if (asal == "Makassar") {
            } else {
                total = belanja - diskon * 0.1;
                cout << total << endl;
            }
        } else {
            if (anggota == "punya") {
                diskon = belanja * 0.25;
                cout << "anda mendapatkan diskon 25%" << endl;
                cout << "harga yang akan anda bayar adalah" << endl;
                jumlah = belanja - diskon;
                cout << jumlah << endl;
            } else {
                cout << "harga yang akan anda bayar : " << endl;
            }
            if (asal == "Makassar") {
            } else {
                total = belanja - diskon * 0.1;
                cout << total << endl;
            }
        }
    }
    return 0;
}

