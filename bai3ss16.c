#include <stdio.h>

// Hàm tính t?ng hai s? nguyên và lýu vào bi?n k?t qu?
void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}

int main() {
    // Khai báo và gán giá tr? cho hai bi?n s? nguyên
    int x = 7;
    int y = 5;
    int ketQua;

    // G?i hàm tính t?ng và lýu k?t qu? vào bi?n k?t qu?
    tinhTong(x, y, &ketQua);

    // In ra k?t qu?
    printf("T?ng c?a %d và %d là %d.\n", x, y, ketQua);

    return 0;
}

