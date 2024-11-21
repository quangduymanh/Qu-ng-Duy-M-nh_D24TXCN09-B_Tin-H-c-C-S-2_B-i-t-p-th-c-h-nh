#include <stdio.h>

int main() {
    int n, i, j, temp;
    int a[100];

    // Nhap so luong phan tu
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Nhap mang a
    printf("Nhap cac phan tu trong mang: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sap xep cac so chan
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Sap xep cac so le
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // In ket qua
    printf("Mang ket qua: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
