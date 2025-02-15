#include <stdio.h>

int findSubstring(char s1[], char s2[]) {
    int i, j;
    for (i = 0; s1[i] != '\0'; i++) {
        int match = 1;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) return i; // Trả về vị trí đầu tiên nếu tìm thấy
    }
    return -1; // Không tìm thấy
}

void replaceSubstring(char s1[], char s2[], char s3[], char result[]) {
    int pos = findSubstring(s1, s2);
    int i, j;

    if (pos == -1) {
        // Nếu không tìm thấy, sao chép S1 vào kết quả
        for (i = 0; s1[i] != '\0'; i++) {
            result[i] = s1[i];
        }
        result[i] = '\0';
        return;
    }

    // Sao chép phần trước S2
    for (i = 0; i < pos; i++) {
        result[i] = s1[i];
    }

    // Chèn S3
    for (j = 0; s3[j] != '\0'; j++) {
        result[i++] = s3[j];
    }

    // Sao chép phần sau S2
    for (j = pos; s1[j + strlen(s2)] != '\0'; j++) {
        result[i++] = s1[j + strlen(s2)];
    }

    result[i] = '\0';
}

int main() {
    char s1[100], s2[100], s3[100], result[200];
    
    printf("Nhập chuỗi S1: ");
    gets(s1);
    printf("Nhập chuỗi S2: ");
    gets(s2);
    printf("Nhập chuỗi S3: ");
    gets(s3);
    
    replaceSubstring(s1, s2, s3, result);

    if (findSubstring(s1, s2) != -1)
        printf("Chuỗi S1 sau khi thay thế: %s\n", result);
    else
        printf("S2 không xuất hiện trong S1\n");
    
    return 0;
}
