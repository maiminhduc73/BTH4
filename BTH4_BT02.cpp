#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 100;
void nhapMang(int a[], int& n);
void taoMangNgauNhien(int a[], int n, int minl, int maxr);
void xuatMang(const int a[], int n);

int main() {
    srand(time(0));
    int a[MAX], n = 0, chon;
    cout << "Chon cach tao mang (1- bang tay | 2- random) ";
    cin >> chon;

    if (chon == 1) {
        nhapMang(a, n);
    }
    else if (chon == 2) {
        do {
            cout << "So luong phan tu ban muon tao: ";
            cin >> n;
            if (n <= 0 || n > MAX) cout << "Nhap lai \n";
        } while (n <= 0 || n > MAX);

        int minl, maxr;
        cout << "Nhap gia tri min va max: ";
        cin >> minl >> maxr;

        taoMangNgauNhien(a, n, minl, maxr);
    }
    else {
        cout << "Lua chon khong hop le! \n";
        return 0;
    }
    cout << "Xuat mang : ";
    xuatMang(a, n);
    return 0;
}

void nhapMang(int a[], int& n) {
    do {
        cout << "So luong phan tu ban muon nhap: ";
        cin >> n;
        if (n <= 0 || n > MAX) cout << "Nhap lai \n";
    } while (n <= 0 || n > MAX);

    cout << "Nhap mang: ";
    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }
}
void taoMangNgauNhien(int a[], int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        a[i] = min + rand() % (max - min + 1);
    }
}

void xuatMang(const int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
