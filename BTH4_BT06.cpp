#include <iostream>
#include <cmath>
using namespace std;

bool ktNguyenTo(int n);
void nhapMang(int a[], int n);
bool ktChinhPhuong(int n);

int main() {
    int n, a[100], dem = 0, dem2 = 0, tb;
    do {
        cout << "Nhap so luong phan tu cua mang: ";
        cin >> n;
        if (n < 0) cout << "Phan tu phai > 0 | Nhap lai ";
    } while (n < 0);
    nhapMang(a, n);
    cout << "So nguyen to trong mang: ";
    for (int i = 0; i < n; i++) {
        if (ktNguyenTo(a[i])) {
            cout << a[i] << " ";
            dem++;
        }
        if (ktChinhPhuong(a[i])) {
            tb += a[i];
            dem2++;
        }
    }
    cout << "\nVoi tat ca cac phan tu trong mang ta co " << dem << " so nguyen to\n";
    if (dem2 > 0) cout << "Trung binh cong cac so chinh phuong trong mang la: " << (double)tb / dem2;
    else cout << "Khong co so chinh phuong nao trong mang nen khong the tinh duoc trung binh cong ";
    return 0;
}

bool ktNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n;i++) {
        if (n % i == 0) return false;
    }return true;
}
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
bool ktChinhPhuong(int n) {
    int can = sqrt(n);
    if (can * can == n) return 1;
    else return 0;
}
