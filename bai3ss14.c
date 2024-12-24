#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello, world!";
    int n = strlen(chuoi);
    char daoNguoc[n + 1];

    for (int i = 0; i < n; i++) {
        daoNguoc[i] = chuoi[n - 1 - i];
    }
    daoNguoc[n] = '\0';
    printf("Chuoi ban ðau: %s\n", chuoi);
    printf("Chuoi dao nguoc: %s\n", daoNguoc);

    return 0;
}

