#include <stdio.h>


void hoanDoi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 8;
    int y = 90;
    printf("Truoc khi ho�n doi:\n");
    printf("x = %d, y = %d\n", x, y);


    hoanDoi(&x, &y);

    printf("Sau khi ho�n doi:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

