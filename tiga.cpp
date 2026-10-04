#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray(int a[3][3], int b[3][3], int baris, int kolom) {
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    cout << "Array A sebelum ditukar:" << endl;
    tampilArray(A);
    cout << "\nArray B sebelum ditukar:" << endl;
    tampilArray(B);

    int baris, kolom;
    cout << "\nMasukkan posisi baris (0-2): ";
    cin >> baris;
    cout << "Masukkan posisi kolom (0-2): ";
    cin >> kolom;

    if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3) {
        tukarArray(A, B, baris, kolom);
    } else {
        cout << "Posisi tidak valid" << endl;
    }

    cout << "\nArray A setelah ditukar:" << endl;
    tampilArray(A);
    cout << "\nArray B setelah ditukar:" << endl;
    tampilArray(B);

    int x = 10;
    int y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;

    cout << "\nSebelum tukar pointer: x = " << x << ", y = " << y << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Sesudah tukar pointer: x = " << x << ", y = " << y << endl;

    return 0;
}