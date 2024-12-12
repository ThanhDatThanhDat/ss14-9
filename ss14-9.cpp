#include <stdio.h>

int main() {
    char chuoi[] = "hello world, o";  
    char ky_tu;
    int i, j = 0;

    printf("Nhap ki tu can xoa: ");
    scanf("%c", &ky_tu);

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != ky_tu) {
            printf("%c", chuoi[i]);
        }
    }

    printf("\n");

    return 0;
}

