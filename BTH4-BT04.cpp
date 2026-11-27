#include <iostream>
using namespace std;

const int MAX = 100 ;
void gt (int a[] , int n, int &vtriDTLN ,int &vtriDTNN, int &minnn , int &maxln) ;
void nhapMang(int a[] , int n) ;
void lkgtln (int a[] , int n , int maxln) ;

int main() {
    int a[MAX] , n , vitriDTLN, vitriDTNN, minnn , maxln , demln ;
    cout<<"Nhap so luong phan tu: " ;
    cin >> n ;
    nhapMang(a,n) ;
    gt(a, n, vitriDTLN, vitriDTNN, minnn, maxln) ;
    cout<<"Gia tri lon nhat trong mang la: " <<maxln <<endl ;
    cout<<"Vi tri xuat hien dau tien la: " <<vitriDTLN << endl ;
    cout<<"Gia tri nho nhat trong mang la: " <<minnn <<endl ;
    cout<<"Vi tri xuat hien dau tien la: " <<vitriDTNN <<endl ;
    cout<<"Tat ca cac vi tri co gia tri lon nhat la: " ;
    lkgtln(a, n, maxln);
    return 0;
}

void gt (int a[] , int n, int &vtriDTLN,int &vtriDTNN, int &minnn , int &maxln ) {

    vtriDTLN = 0 ; vtriDTNN = 0 ; minnn = a[0] ; maxln = a[0] ;
    for (int i = 1; i < n; i++) {
        if (a[i] > maxln) {
            maxln = a[i];
            vtriDTLN = i;
        }
        if (a[i] < minnn) {
            minnn = a[i];
            vtriDTNN = i;
        }
    }
}

void lkgtln(int a[], int n, int maxln) {
    for (int i = 0; i < n; i++) {
        if (a[i] == maxln) {
            cout << i << " ";
        }
    }
}
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
