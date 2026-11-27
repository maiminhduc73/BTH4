#include <iostream>
#include <cmath>
using namespace std;

void nhapMang(int a[], int n);
void thongKeX(int x, int a[], int n, int& viTriDau, int& viTriCuoi, int& dem);
int timGanXNhat(int x, int a[], int n);

int main() {
    int a[100];
    int n, x;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    nhapMang(a, n);

    cout << "Nhap gia tri x can tim: ";
    cin >> x;

    int viTriDau, viTriCuoi, dem;
    thongKeX(x, a, n, viTriDau, viTriCuoi, dem);
    cout << "Vi tri xuat hien dau tien: " << viTriDau << endl;
    cout << "Vi tri xuat hien cuoi cung: " << viTriCuoi << endl;
    cout << "So lan xuat hien cua " << x << ": " << dem << endl;
    cout << "Phan tu co gia tri gan " << x << " nhat la: " << timGanXNhat(x, a, n) << endl;

    return 0;
}

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void thongKeX(int x, int a[], int n, int& viTriDau, int& viTriCuoi, int& dem) {
    viTriDau = -1;
    viTriCuoi = -1;
    dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (viTriDau == -1) viTriDau = i;
            viTriCuoi = i;
            dem++;
        }
    }
}

int timGanXNhat(int x, int a[], int n) {
    int ganNhat = a[0];
    int khoangCachMin = abs(a[0] - x);

    for (int i = 1; i < n; i++) {
        int khoangCach = abs(a[i] - x);
        if (khoangCach < khoangCachMin) {
            khoangCachMin = khoangCach;
            ganNhat = a[i];
        }
    }
    return ganNhat;
}

