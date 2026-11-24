#include <iostream>
using namespace std;

const int MAX = 100;
int tongPhanTu(int a[], int n);
double trungBinhCong(int a[], int n);
void tongChanvaVTL(int a[], int n, int& tc, int& tptvtl);
void demso(int a[], int n, int& ptD, int& ptA, int& ptK);

void nhapMang(int a[], int n);


int main() {
    int tc, tptvtl, ptD, ptA, ptK, n, a[MAX];
    do {
        cout << "Nhap vao so phan tu: ";
        cin >> n;
        cout << "Nhap mang: ";
        nhapMang(a, n);
        if (n <= 0 || n > MAX) cout << "Nhap lai | phan tu khong the am";
    } while (n <= 0 || n > MAX);

    cout << "Tong phan tu: " << tongPhanTu(a, n) << endl;
    cout << "Trung binh cong cua mang: " << trungBinhCong(a, n) << endl;
    tongChanvaVTL(a, n, tc, tptvtl);
    cout << "Tong chan: " << tc << endl;
    cout << "Tong cac phan tu o vi tri le: " << tptvtl << endl;
    demso(a, n, ptD, ptA, ptK);
    cout << "Dem so phan tu duong :" << ptD << endl
        << "Dem so phan tu am :" << ptA << endl
        << "Dem so 0 : " << ptK << endl;

    return 0;
}
int tongPhanTu(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}
double trungBinhCong(int a[], int n) {
    return (double)tongPhanTu(a, n) / n;
}
void tongChanvaVTL(int a[], int n, int& tc, int& tptvtl) {
    tc = 0; tptvtl = 0;
    for (int i = 0; i < n;i++) {
        if (a[i] % 2 == 0) tc += a[i];
        if (i % 2 == 0) {
            tptvtl += a[i];
        }
    }
}
void demso(int a[], int n, int& ptD, int& ptA, int& ptK) {
    ptD = 0;
    ptA = 0;
    ptK = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) ptA++;
        else if (a[i] > 0) ptD++;
        else ptK++;
    }
}
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}


