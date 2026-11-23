#include <iostream>
using namespace std;

void xuatMang(int a[], int n);
void xuatMangNguoc(int a[], int n);


int main() {
    int a[] = { 5,8,2,9,4,7 };
    int n = sizeof(a) / sizeof(a[0]);
    xuatMang(a, n);
    cout << endl;

    xuatMangNguoc(a, n);

    cout << "Phan tu dau tien: " << a[0] << endl;
    cout << "Phan tu cuoi cung: " << a[n - 1] << endl;
    cout << "So phan tu cua mang: " << n << endl;

    int tongChan = 0;
    cout << "Cac phan tu chan: ";
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
            tongChan += a[i];
        }
    }
    cout << "\nTong cac phan tu chan : " << tongChan;
    return 0;
}

void xuatMang(int a[], int n) {
    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
}

void xuatMangNguoc(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;
}

