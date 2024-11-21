#include <stdio.h>

int main() {
    int t, n, i, j, max_count;
    
    // Nhap so luong test case
    printf("Nhap so test case: ");
    scanf("%d", &t);
    
    while (t--) {
        int count[10000] = {0}; // Mang dem so lan xuat hien cua cac so
        int numbers[10000];
        
        // Nhap so luong phan tu trong day
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
        
        printf("Nhap cac so trong day: ");
        // Nhap cac phan tu cua day
        for (i = 0; i < n; i++) {
            scanf("%d", &numbers[i]);
            count[numbers[i]]++;  // Tang so lan xuat hien cua so
        }

        max_count = 0;
        // Tim so co so lan xuat hien lon nhat va so lon nhat neu co nhieu so xuat hien cung so lan
        for (i = 0; i < n; i++) {
            if (count[numbers[i]] > max_count) {
                max_count = count[numbers[i]];
            }
        }

        // In ra cac so co so lan xuat hien lon nhat
        for (i = 0; i < n; i++) {
            if (count[numbers[i]] == max_count) {
                printf("%d ", numbers[i]);
                count[numbers[i]] = -1; // Danh dau so da in de tranh in lai
            }
        }
        printf("\n");
    }

    return 0;
}
