#include <stdio.h>

// H�m t�nh t?ng hai s? nguy�n v� l�u v�o bi?n k?t qu?
void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}

int main() {
    // Khai b�o v� g�n gi� tr? cho hai bi?n s? nguy�n
    int x = 7;
    int y = 5;
    int ketQua;

    // G?i h�m t�nh t?ng v� l�u k?t qu? v�o bi?n k?t qu?
    tinhTong(x, y, &ketQua);

    // In ra k?t qu?
    printf("T?ng c?a %d v� %d l� %d.\n", x, y, ketQua);

    return 0;
}

